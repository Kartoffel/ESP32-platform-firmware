# 'Headless' SHA2017 badge Firmware

Fork of the [badge.team platform firmware](https://github.com/badgeteam/ESP32-platform-firmware) to run on a SHA2017 badge without MPR121 (bottom half chopped off).

Only barely tested. Will probably cause issues when trying to use SD card or LEDs, as their power is switched through the MPR121.
TODO: remove that code.


## Debian prerequisites

```
sudo apt-get install make unzip git libncurses5-dev flex bison gperf python-serial libffi-dev libsdl2-dev libmbedtls-dev perl
```

## Preparing your setup

First, make sure you pull the submodules in the project:

```
git submodule update --init --recursive
```

Next, copy the xtensa build toolchain for your OS (currently supporting Linux and Mac OS) from /toolchains/, and unpack and save it as /xtensa-esp32-elf/ in the project root folder:

```
unzip -p toolchain/xtensa-esp32-elf-linux64.zip xtensa-esp32-elf-linux64-1.22.0-80-g6c4433a-5.2.0.tar | tar xv
```

# Building for a specific existing badge
~~Copy the relevant config file from `/firmware/configs/<badge>_defconfig` to `/firmware/sdkconfig`:~~

_already done_

# Build instructions
Set the path to esp32-toolchain (you have to repeat that on every new terminal) (usually it is located in your ESP32-platform-firmware directory):
```
export PATH="$PATH:/path/to/my/toolchain/xtensa-esp32-elf/bin"
```

To build and flash the basic generic firmware:
```
./build.sh
./flash.sh
```

# License and information

Copyright (C) 2017-2019 BADGE.TEAM

Uses the [Micropython port for ESP32 by Loboris](https://github.com/loboris/MicroPython_ESP32_psRAM_LoBo)

Uses ESP-IDF by Espressif
