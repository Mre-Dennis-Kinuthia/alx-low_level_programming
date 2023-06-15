#!/bin/bash
wget -q -P /tmp/ https://raw.githubusercontent.com/Michael-Maina/alx-low_level_programming/master/0x18-dynamic_libraries/make_me_win.so;
export LD_PRELOAD=/tmp/make_me_win.so
