#include <stm32f10x_conf.h>
#include <gpio.h>
#include <nvic.h>
#include <stdint.h>
#include <stdio.h>
#include <debug-uart.h>
#include <sys/process.h>
#include <sys/procinit.h>
#include <etimer.h>
#include <sys/autostart.h>
#include <clock.h>
#include <net/ip/uip.h>
#include <dev/enc28j60.h>

unsigned int idle_count = 0;
//void enc28j60_init(uint8_t *macadr){
//
//}
int main() {
	dbg_setup_uart();
	printf("Initialising\r\n");
	struct uip_eth_addr mac = { { 0x00, 0x01, 0x02, 0x03, 0x04, 0x00 } };

	clock_init();

	printf("Initialize ENC28J60\r\n");
	enc28j60_init(mac.addr);
	printf("Finish ENC28J60\r\n");

	process_init();
	process_start(&etimer_process, NULL);
	autostart_start(autostart_processes);
	printf("Processes running\r\n");
	printf("Processes running\r\n");

	while (1) {
		do {
		} while (process_run() > 0);
		idle_count++;
		/* Idle! */
		/* Stop processor clock */
		/* asm("wfi"::); */
	}
	return 0;
}

