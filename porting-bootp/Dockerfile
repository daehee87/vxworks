FROM ubuntu:20.04

RUN sed -i "s/http:\/\/archive.ubuntu.com/http:\/\/kr.archive.ubuntu.com/g" /etc/apt/sources.list

# install related libraries
RUN apt update && apt-get install -y gcc g++ gcc-multilib g++-multilib bsdmainutils git 
#make libini-config-dev libseccomp-dev

# at root
WORKDIR /

# setup configs
ADD wrap.cc /wrap.cc
ADD make.sh /make.sh
ADD ocr1100Ctlr.ubuntu /ocr1100Ctlr.ubuntu
ADD hook.c /hook.c

# setup Preeny
#WORKDIR /
#RUN git clone https://github.com/zardus/preeny
#WORKDIR /preeny
#ENV CC gcc
#ENV CXX g++
#ENV ARCH i386
#RUN make ARCH=i386
# output: preeny/x86_64-linux-gnu/desock.so

WORKDIR /
STOPSIGNAL SIGTERM
CMD ["/make.sh"]


