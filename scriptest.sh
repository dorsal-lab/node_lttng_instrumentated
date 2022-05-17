#/bin/sh
COMMAND="LD_PRELOAD=/home/herve/data/node-v12.22.3/deps/uv/src/unix/libuvtp.so /home/herve/data/node-v12.22.3/node"
for I in $@
do
    COMMAND=$COMMAND" $I"
done
eval $COMMAND
