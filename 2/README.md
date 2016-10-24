For reduce.c, there are 4 command line arguments. Arg1 is the length of the array, arg2 is the number of threads, arg3 will be the scheduling type,
and arg4 is the number of iterations if the schedule is dynamic.

The scheduling types used in this project will both have a number associated with them, 1 being static and 2 being dynamic. If the scheduling type is static,
you will still need to enter a number for the iteration argument.

To compile without errors, you will need to use:

gcc -fopenmp -o reduce reduce.c

Output from script.sh on Mamba:

10^8, 1, static, 1
Time: 493233
Min: 40
10^8, 1, dynamic, 1
Time: 2433132
Min: 8
10^8, 1, dynamic, 1000
Time: 279648
Min: 4
10^8, 1, dynamic, 100000
Time: 253051
Min: 32
10^8, 2, static, 1
Time: 252344
Min: 49
10^8, 2, dynamic, 1
Time: 1480653
Min: 18
10^8, 2, dynamic, 1000
Time: 255242
Min: 0
10^8, 2, dynamic, 100000
Time: 253105
Min: 85
10^8, 4, static, 1
Time: 252768
Min: 12
10^8, 4, dynamic, 1
Time: 1480615
Min: 29
10^8, 4, dynamic, 1000
Time: 255088
Min: 22
10^8, 4, dynamic, 100000
Time: 253501
Min: 11
10^8, 8, static, 1
Time: 253734
Min: 4
10^8, 8, dynamic, 1
Time: 1500732
Min: 41
10^8, 8, dynamic, 1000
Time: 255099
Min: 11
10^8, 8, dynamic, 100000
Time: 253119
Min: 23
10^8, 16, static, 1
Time: 252558
Min: 100
10^8, 16, dynamic, 1
Time: 3717352
Min: 2
10^8, 16, dynamic, 1000
Time: 792020
Min: 4
10^8, 16, dynamic, 100000
Time: 337774
Min: 10