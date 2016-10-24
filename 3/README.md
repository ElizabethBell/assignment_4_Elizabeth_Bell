For integrate.c, there are 7 command line arguments. Arg1 is the lower bound, arg2 is the upper bound, arg3 will be the number of points, arg4 is the
intensity, arg5 is the number of threads, arg6 is the scheduling type, and arg7 is the number of iterations if the schedule is dynamic.

The scheduling types used in this project will both have a number associated with them, 1 being static and 2 being dynamic. If the scheduling type is static,
you will still need to enter a number for the iteration argument.

To compile without errors, you will need to use:

gcc -fopenmp -o integrate integrate.c -lm

Output from script.sh on Mamba:

0, 10^3, 10^3, 10, 1, dynamic, 1
Time: 21591
0, 10^3, 10^3, 1000, 1, dynamic, 1000
Time: 2243729
0, 10^3, 10^3, 10, 2, dynamic, 1
Time: 11041
0, 10^3, 10^3, 1000, 2, dynamic, 1000
Time: 1127252
0, 10^3, 10^3, 10, 4, dynamic, 1
Time: 6334
0, 10^3, 10^3, 1000, 4, dynamic, 1000
Time: 642388
0, 10^3, 10^3, 10, 8, dynamic, 1
Time: 6207
0, 10^3, 10^3, 1000, 8, dynamic, 1000
Time: 509274
0, 10^3, 10^3, 10, 16, dynamic, 1
Time: 5176
0, 10^3, 10^3, 1000, 16, dynamic, 1000
Time: 468193

Program would not compute for 10^9 points.