#!/bin/bash

#export GPU_FORCE_64BIT_PTR=0
export GPU_MAX_HEAP_SIZE=100
export GPU_USE_SYNC_OBJECTS=1
export GPU_MAX_ALLOC_PERCENT=100
export GPU_SINGLE_ALLOC_PERCENT=100

./sgminer --kernel sha256q -I 26 -o stratum+tcp://pooladdr:port -u wallet -p x

