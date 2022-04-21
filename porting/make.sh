#!/bin/sh
sudo apt install g++-multilib
g++ -o wrap ocr1100Ctlr.ubuntu wrap.cc -m32 -v
