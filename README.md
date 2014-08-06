The Contiki Operating System
============================

[![Build Status](https://secure.travis-ci.org/contiki-os/contiki.png)](http://travis-ci.org/contiki-os/contiki)

Contiki is an open source operating system that runs on tiny low-power
microcontrollers and makes it possible to develop applications that
make efficient use of the hardware while providing standardized
low-power wireless communication for a range of hardware platforms.

Contiki is used in numerous commercial and non-commercial systems,
such as city sound monitoring, street lights, networked electrical
power meters, industrial monitoring, radiation monitoring,
construction site monitoring, alarm systems, remote house monitoring,
and so on.

For more information, see the Contiki website:

[http://contiki-os.org](http://contiki-os.org)

Contiki-STM32
========

Hardware:
---

UART PORT:
```sh
PB6 --> UART TX
PB7 --> UART RX
```

ENC28J60 PORT:
```sh
PB12 --> CS
PB13 --> SCK
PB14 --> MISO
PB15 --> MOSI
PA7 --> RESET
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
