#!/bin/bash
wget -P /tmp https://github.com/Rashnotech/alx-low_level_programming/raw/master/0x18-dynamic_libraries/wincode.so
export LD_PRELOAD=/tmp/wincode.so
