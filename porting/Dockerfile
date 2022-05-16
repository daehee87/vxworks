FROM ubuntu:20.04

RUN sed -i "s/http:\/\/archive.ubuntu.com/http:\/\/kr.archive.ubuntu.com/g" /etc/apt/sources.list

# install related libraries
RUN apt update && apt-get install -y gcc g++ gcc-multilib g++-multilib bsdmainutils git

# at root
WORKDIR /

# setup configs
ADD wrap.cc /wrap.cc
ADD make.sh /make.sh
ADD ocr1100Ctlr.ubuntu /ocr1100Ctlr.ubuntu
ADD hook.c /hook.c

STOPSIGNAL SIGTERM
CMD ["/make.sh"]


