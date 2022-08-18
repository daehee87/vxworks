ID="$(basename $PWD)"
mkdir corpus 2>/dev/null
sudo docker build -t "vxworks-build-$ID" .
sudo docker rm -f "vxworks-build-$ID-nick"
# add --cap-add=SYS_PTRACE --security-opt seccomp=unconfined to debug nginx
sudo docker run --cap-add=SYS_PTRACE \
                --security-opt \
                seccomp=unconfined \
                -v $PWD/out:/out \
                --name "vxworks-build-$ID-nick" \
                -it \
                "vxworks-build-$ID"

