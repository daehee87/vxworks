#!/bin/sh
LD_PRELOAD="./out/hook.so" ltrace ./out/wrap.linux $1
echo '\ndone.'
