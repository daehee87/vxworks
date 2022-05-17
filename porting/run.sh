#!/bin/sh
LD_PRELOAD=./out/hook.so ./out/wrap.linux $1
echo 'done.'
