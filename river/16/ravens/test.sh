#!/bin/bash

sudo rm  /opt/ravens/flower.cpp
sudo cat /opt/ravens/seed.cpp                              >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/water/information/configure.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/information/information.h       >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/information/flag.h              >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/water/box/c++/dir/dir.h          >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/c++/file/get.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/c++/file/save.h        >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/c++/file/append.h      >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/c++/time/time.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/c++/ip/address.h        >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/shell/shell.h     >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/system/name.h     >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/system/system.h   >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/memory/memory.h   >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/water/box/Linux/cpu/INFORMATION.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/cpu/rate.h                >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/cpu/temperature.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/cpu/f.h                   >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/cpu/cores.h               >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/water/box/Linux/cpu/cpu.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/box/Linux/sound/sound.h     >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/water/sound/configure.h           >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/sound/ft/dft.h              >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/sound/ft/fft.h              >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/sound/ft/show.h             >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/sound/blank/corde.h         >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/water/net/configure.h                 >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/net/message/code/code.h         >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/net/message/update/update.h     >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/net/message/control/control.h   >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/net/server.h           >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/water/net/client.h           >> /opt/ravens/flower.cpp


sudo cat /opt/ravens/suface/watchdog/check/net.h       >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/suface/watchdog/check/ssh.h       >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/suface/watchdog/check/power.h     >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/suface/watchdog/show/show.h       >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/suface/watchdog/dog.h             >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/suface/window/window.h            >> /opt/ravens/flower.cpp

sudo cat /opt/ravens/suface/mind/command.h             >> /opt/ravens/flower.cpp
sudo cat /opt/ravens/suface/mind/mind.h                >> /opt/ravens/flower.cpp


sudo g++ /opt/ravens/flower.cpp -lpthread  -std=c++0x -o /opt/gopi
sudo rm  /opt/ravens/flower.cpp











