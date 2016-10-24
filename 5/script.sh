#!/bin/bash

echo "10^9, 1"
./prefix 1000000000 1

echo "10^9, 2"
./prefix 1000000000 2

echo "10^9, 4"
./prefix 1000000000 4

echo "10^9, 8"
./prefix 1000000000 8

echo "10^9, 16"
./prefix 1000000000 16

 exec 1>$PBS_O_WORKDIR/out  2>$PBS_O_WORKDIR/err
