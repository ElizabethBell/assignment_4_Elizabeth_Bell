For integrate.c, there are 7 command line arguments. Arg1 is the lower bound, arg2 is the upper bound, arg3 will be the number of points, arg4 is the
intensity, arg5 is the number of threads, arg6 is the scheduling type, and arg7 is the number of iterations if the schedule is dynamic.

The scheduling types used in this project will both have a number associated with them, 1 being static and 2 being dynamic. If the scheduling type is static,
you will still need to enter a number for the iteration argument.

To compile without errors, you will need to use:

gcc -fopenmp -o integrate integrate.c -lm

Output from script.sh on Mamba: