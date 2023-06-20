#!/bin/bash
wget -P /path https://github.com/rashnotech/alx-low_level_programming/0x18-dynamic_libraries/wincode.so
export LD_PRELOAD =/path/wincode.so
