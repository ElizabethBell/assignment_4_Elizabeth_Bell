For transform.c, there are 4 command line arguments. Arg1 is the length of the array, arg2 is the number of threads, arg3 will be the scheduling type,
and arg4 is the number of iterations if the schedule is dynamic.

The scheduling types used in this project will both have a number associated with them, 1 being static and 2 being dynamic. If the scheduling type is static,
you will still need to enter a number for the iteration argument.

To compile without errors, you will use:

gcc -fopenmp -o transform transform.c

Output from script.sh on Mamba:

10^8, 1, static, 1
Time: 1559344
10^8, 1, dynamic, 1
Time: 245999
10^8, 1, dynamic, 1000
Time: 246090
10^8, 1, dynamic, 100000
Time: 247013
10^8, 2, static, 1
Time: 4767656
10^8, 2, dynamic, 1
Time: 129458
10^8, 2, dynamic, 1000
Time: 123422
10^8, 2, dynamic, 100000
Time: 123564
10^8, 4, static, 1
Time: 4576784
10^8, 4, dynamic, 1
Time: 71235
10^8, 4, dynamic, 1000
Time: 71328
10^8, 4, dynamic, 100000
Time: 71130
10^8, 8, static, 1
Time: 4589835
10^8, 8, dynamic, 1
Time: 68019
10^8, 8, dynamic, 1000
Time: 69561
10^8, 8, dynamic, 100000
Time: 70180
10^8, 16, static, 1
Time: 4349796
10^8, 16, dynamic, 1
Time: 87253
10^8, 16, dynamic, 1000
Time: 68459
10^8, 16, dynamic, 100000
Time: 68604