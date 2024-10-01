# STM32 Tutorial - Blinking LED with STM32Cube

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

### [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html)

### Clone this repository
```bash
git clone --branch blackpill-led-blink-stm32cube https://github.com/yuichiroaoki/stm32-tutorial.git
cd stm32-tutorial
```

## Quickstart
1. Connect the Blackpill STM32 board to the ST-LINK V2 programmer.
2. Connect the ST-LINK V2 programmer to your computer.
3. Open the project folder in VSCode.
4. Press `Ctrl+Shift+P` and select `PlatformIO: Upload` to upload the firmware to the board.

In order to use configuration header file, you need to add the following lines to `platformio.ini` file.
```ini
board_build.stm32cube.custom_config_header = yes
```