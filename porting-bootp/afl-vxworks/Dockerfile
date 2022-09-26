FROM ubuntu:18.04

RUN sed -i "s/http:\/\/archive.ubuntu.com/http:\/\/kr.archive.ubuntu.com/g" /etc/apt/sources.list

RUN apt update && apt-get install -y git wget unzip libglib2.0-dev libeina-dev qemu-user qemu-user-static build-essential qemu-system-arm libtool-bin python automake bison

RUN apt-get install -y llvm clang ninja-build

# setup AFL++
RUN echo 1
ADD AFLplusplus /AFLplusplus
#RUN git clone https://github.com/AFLplusplus/AFLplusplus.git
WORKDIR /AFLplusplus
RUN AFL_NO_X86=1 make -j4
WORKDIR /AFLplusplus/qemu_mode
RUN apt update && apt-get install -y python3-pip
RUN pip3 install ninja
RUN CPU_TARGET=i386 ./build_qemu_support.sh
WORKDIR /AFLplusplus
RUN AFL_NO_X86=1 make -j4

WORKDIR /
RUN mkdir input
RUN mkdir output
ADD hook.so /AFLplusplus/
ADD wrap.linux /AFLplusplus/
ADD init.sh /AFLplusplus/
ADD sample.config /AFLplusplus/
RUN chmod +x /AFLplusplus/init.sh

WORKDIR /AFLplusplus
CMD ["./init.sh"]


