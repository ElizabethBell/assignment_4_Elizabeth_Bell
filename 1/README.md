For transform.c, there are 4 command line arguments. Arg1 is the length of the array, arg2 is the number of threads, arg3 will be the scheduling type,
and arg4 is the number of iterations if the schedule is dynamic.

The scheduling types used in this project will both have a number associated with them, 1 being static and 2 being dynamic. If the scheduling type is static,
you will still need to enter a number for the iteration argument.

To compile without errors, you will use:

gcc -fopenmp -o transform transform.c

Output from script.sh on Mamba:
10^8, 1, static, 1
Time: 1559715
10^8, 1, dynamic, 1
Time: 245938
10^8, 1, dynamic, 1000
Time: 245944
10^8, 1, dynamic, 100000
Time: 246054
10^8, 2, static, 1
Time: 1559206
10^8, 2, dynamic, 1
Time: 245884
10^8, 2, dynamic, 1000
Time: 245856
10^8, 2, dynamic, 100000
Time: 246101
10^8, 4, static, 1
Time: 1559423
10^8, 4, dynamic, 1
Time: 245955
10^8, 4, dynamic, 1000
Time: 245851
10^8, 4, dynamic, 100000
Time: 246345
10^8, 8, static, 1
Time: 1560526
10^8, 8, dynamic, 1
Time: 245972
10^8, 8, dynamic, 1000
Time: 245963
10^8, 8, dynamic, 100000
Time: 245907
10^8, 16, static, 1
Time: 1557954
10^8, 16, dynamic, 1
Time: 246214
10^8, 16, dynamic, 1000
Time: 246310
10^8, 16, dynamic, 100000
Time: 245940