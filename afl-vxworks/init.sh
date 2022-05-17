#!/bin/bash
ls -al /input
echo 'put genesis test case'
echo aaaaaaaa > /input/dummy
perl -e 'print"A"x4096' > /input/long
#AFL_PRELOAD=./hook.so ./afl-fuzz -Q -i /input -o /output -- ./wrap.linux @@        # via file
AFL_PRELOAD=./hook.so ./afl-fuzz -Q -i /input -o /output -- ./wrap.linux            # via stdin
echo 'spawning shell...'
/bin/bash
