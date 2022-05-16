#!/bin/sh
LD_PRELOAD=./out/hook.so ./out/wrap.linux
echo 'done.'
