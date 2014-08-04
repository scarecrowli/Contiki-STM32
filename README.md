Contiki-STM32
========
```sh

cd $(CONTIKI_PROJECT)/examples/hello-world
$make TARGET=stm32test hello-world.bin

#Using Jlink
cd $(JLINK_DIR)


```

./JLinkExe

Jlink-Console
========
exec device STM32F103C8
loadbin $(CONTIKI_PROJECT)/examples/hello-world/hello-world.bin, 0x0
