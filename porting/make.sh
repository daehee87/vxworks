#!/bin/sh
g++ -fno-permissive -o /out/wrap.linux ocr1100Ctlr.ubuntu wrap.cc -m32 -no-pie
gcc -o /out/hook.so /hook.c -fPIC -shared -ldl -m32
