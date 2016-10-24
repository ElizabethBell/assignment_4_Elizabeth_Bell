#!/bin/bash

echo "0, 10^5, 10^3, 10, 1, dynamic, 1"
./integrate 0 100000 1000 10 1 2 1

echo "0, 10^5, 10^3, 1000, 1, dynamic, 1"
./integrate 0 100000 1000 1000 1 2 1

echo "0, 10^5, 10^3, 10, 2, dynamic, 1"
./integrate 0 100000 1000 10 2 2 1

echo "0, 10^5, 10^3, 1000, 2, dynamic, 1000"
./integrate 0 100000 1000 1000 2 2 1000

echo "0, 10^5, 10^3, 10, 4, dynamic, 1"
./integrate 0 100000 1000 10 4 2 1

echo "0, 10^5, 10^3, 1000, 4, dynamic, 1000"
./integrate 0 100000 1000 1000 4 2 1000

echo "0, 10^5, 10^3, 10, 8, dynamic, 1"
./integrate 0 100000 1000 10 8 2 1

echo "0, 10^5, 10^3, 1000, 8, dynamic, 1000"
./integrate 0 100000 1000 1000 8 2 1000

echo "0, 10^5, 10^3, 10, 16, dynamic, 1"
./integrate 0 100000 1000 10 16 2 1

echo "0, 10^5, 10^3, 1000, 16, dynamic, 1000"
./integrate 0 100000 1000 1000 16 2 1000

echo "0, 10^5, 10^9, 10, 1, dynamic, 1"
./integrate 0 100000 1000000000 10 1 2 1

echo "0, 10^5, 10^9, 1000, 1, dynamic, 1000"
./integrate 0 100000 1000000000 1000 1 2 1000

echo "0, 10^5, 10^9, 10, 2, dynamic, 1"
./integrate 0 100000 1000000000 10 2 2 1

echo "0, 10^5, 10^9, 1000, 2, dynamic, 1000"
./integrate 0 100000 1000000000 1000 2 2 1000

echo "0, 10^5, 10^9, 10, 4, dynamic, 1"
./integrate 0 100000 1000000000 10 4 2 1

echo "0, 10^5, 10^9, 1000, 4, dynamic, 1000"
./integrate 0 100000 1000000000 1000 4 2 1000

echo "0, 10^5, 10^9, 10, 8, dynamic, 1"
./integrate 0 100000 1000000000 10 8 2 1

echo "0, 10^5, 10^9, 1000, 8, dynamic, 1000"
./integrate 0 100000 1000000000 1000 8 2 1000

echo "0, 10^5, 10^9, 10, 16, dynamic, 1"
./integrate 0 100000 1000000000 10 16 2 1

echo "0, 10^5, 10^9, 1000, 16, dynamic, 1000"
./integrate 0 100000 1000000000 1000 16 2 1000

 exec 1>$PBS_O_WORKDIR/out  2>$PBS_O_WORKDIR/err

