# STM32 Tutorial

## Getting Started

### Hardwares used in this tutorial

### Blackpill STM32 board
MCU: STM32F411CEU6  
Board: [WeAct Black Pill V2.0](https://stm32-base.org/boards/STM32F411CEU6-WeAct-Black-Pill-V2.0.html)  
[Schematic](https://stm32-base.org/assets/pdf/boards/original-schematic-STM32F411CEU6_WeAct_Black_Pill_V2.0.pdf)

You can purchase a cheap clone Blackpill STM32 board under $4.

### ST-LINK V2 Programmer
- You need this to upload the firmware to the board.
- You can purchase a cheap clone ST-LINK V2 under $5.

### Setting up the environment
- [VScode](https://code.visualstudio.com/) with PlatformIO:
	- You can install PlatformIO from the VSCode extension marketplace.
- Install [STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html)


### LED Blinking
Since the blue LED is connected to 3.3V through a resistor and then to PC13, you need to set PC13 to **LOW to turn the LED on** and **HIGH to turn it off**. 

### USB Serial Communication
In order to communicate with the board via USB, you add the following lines to the `platformio.ini` file:
```ini
build_flags =
  -D PIO_FRAMEWORK_ARDUINO_ENABLE_CDC
  -D PIO_FRAMEWORK_ARDUINO_SERIAL_WITHOUT_GENERIC
```