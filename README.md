# STM32 Tutorial - Blinking LED and USB Serial Communication

## Prerequisites
In this tutorial, the following hardware is used:

### Blackpill STM32 board
MCU: STM32F411CEU6  
Board: [WeAct Black Pill V2.0](https://stm32-base.org/boards/STM32F411CEU6-WeAct-Black-Pill-V2.0.html)  
[Schematic](https://stm32-base.org/assets/pdf/boards/original-schematic-STM32F411CEU6_WeAct_Black_Pill_V2.0.pdf)

You can purchase a cheap clone Blackpill STM32 board under $4. You can use other STM32 boards, but you need to modify platformio.ini file and the LED pin number.

### ST-LINK V2 Programmer
You need this to upload the firmware to the board. You can purchase a cheap clone ST-LINK V2 under $5.

## Installation

### [VScode](https://code.visualstudio.com/) with PlatformIO:
You can install PlatformIO from the VSCode extension marketplace.

### [STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html)
You need this to flash the firmware to the board.

### Clonne this repository
```bash
git clone --branch blackpill-led-blink-arduino https://github.com/yuichiroaoki/stm32-tutorial.git
cd stm32-tutorial
```

## Quickstart
1. Connect the Blackpill STM32 board to the ST-LINK V2 programmer.
2. Connect the ST-LINK V2 programmer to your computer.
3. Open the project folder in VSCode.
4. Open the `src/main.cpp` file.
5. Press `Ctrl+Shift+P` and select `PlatformIO: Upload` to upload the firmware to the board.

Since the blue LED is connected to 3.3V through a resistor and then to PC13, you need to set PC13 to **LOW to turn the LED on** and **HIGH to turn it off**. 

### USB Serial Communication
1. Connect the Blackpill STM32 board to your computer via USB.
2. Press `Ctrl+Shift+P` and select `PlatformIO: Monitor` to open the serial monitor.

You should see the following message:
```
Start
LED off!
LED on!
LED off!
```

In order to communicate with the board via USB, you add the following lines to the `platformio.ini` file:
```ini
build_flags =
  -D PIO_FRAMEWORK_ARDUINO_ENABLE_CDC
  -D PIO_FRAMEWORK_ARDUINO_SERIAL_WITHOUT_GENERIC
```