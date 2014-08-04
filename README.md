Contiki-STM32
========

Hardware:
---

UART PORT:
```sh
PB6 --> UART TX
PB7 --> UART RX
```
Build hello-world exmaple:
---
```sh

cd $(CONTIKI_PROJECT)/examples/hello-world
$make TARGET=stm32test hello-world.bin

cd $(JLINK_DIR)
./JLinkExe

```

Download binary file to STM32F103C8T6
---
```sh

cd $(JLINK_DIR)
./JLinkExe
exec device STM32F103C8
loadbin $(CONTIKI_PROJECT)/examples/hello-world/hello-world.bin, 0x0

```
