#!/bin/bash
cp ../out/* .
sudo docker build -t "vxworks-fuzz" .
sudo docker rm -f vxworks-fuzz
sudo docker run -it "vxworks-fuzz"

