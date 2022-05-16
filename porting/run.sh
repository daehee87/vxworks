mkdir out 2>/dev/null
sudo docker build -t "vxworks-build" .
sudo docker rm -f vxworks-build-nick
# add --cap-add=SYS_PTRACE --security-opt seccomp=unconfined to debug nginx
sudo docker run --cap-add=SYS_PTRACE \
                --security-opt \
                seccomp=unconfined \
                -v $PWD/out:/out \
                --name vxworks-build-nick \
                -it \
                vxworks-build

