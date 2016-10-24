For reduce.c, there are 4 command line arguments. Arg1 is the length of the array, arg2 is the number of threads, arg3 will be the scheduling type,
and arg4 is the number of iterations if the schedule is dynamic.

The scheduling types used in this project will both have a number associated with them, 1 being static and 2 being dynamic. If the scheduling type is static,
you will still need to enter a number for the iteration argument.

To compile without errors, you will need to use:

gcc -fopenmp -o reduce reduce.c

Output from script.sh on Mamba:

10^8, 1, static, 1
Time: 252697
Min: 0
10^8, 1, dynamic, 1
Time: 1479222
Min: 27
10^8, 1, dynamic, 1000
Time: 255179
Min: 91
10^8, 1, dynamic, 100000
Time: 252938
Min: 48
10^8, 2, static, 1
Time: 126788
Min: 0
10^8, 2, dynamic, 1
Time: 2682983
Min: 1
10^8, 2, dynamic, 1000
Time: 132114
Min: 2
10^8, 2, dynamic, 100000
Time: 126838
Min: 23
10^8, 4, static, 1
Time: 72502
Min: 4
10^8, 4, dynamic, 1
Time: 3344449
Min: 11
10^8, 4, dynamic, 1000
Time: 75391
Min: 5
10^8, 4, dynamic, 100000
Time: 72683
Min: 4
10^8, 8, static, 1
Time: 58746
Min: 0
10^8, 8, dynamic, 1
Time: 3313410
Min: 11
10^8, 8, dynamic, 1000
Time: 54564
Min: 24
10^8, 8, dynamic, 100000
Time: 52650
Min: 45
10^8, 16, static, 1
Time: 57981
Min: 22
10^8, 16, dynamic, 1
Time: 3313182
Min: 11
10^8, 16, dynamic, 1000
Time: 54578
Min: 16
10^8, 16, dynamic, 100000
Time: 52645
Min: 3