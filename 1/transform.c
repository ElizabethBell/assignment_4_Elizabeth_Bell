// arg 1 will be the array length, arg 2 will be the number of threads, arg 3 will be the scheduling type, and arg 4 will be the number of iterations
//to avoid issues, the scheduling policy will have assigned numbers for each one (1 being static, 2 being dynamic)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include <omp.h>

int main (int argc, char *argv[]) {
  srand(time(NULL));
  
  if(argc < 5) {
    printf("Incorrect number of arguments. Program terminated.");
  }
  else {
    int length = atoi(argv[1]);
    int threads = atoi(argv[2]);
    int sched = atoi(argv[3]);
    int iter = atoi(argv[4]);
    int i;
    int arr[length];
    struct timeval start, end;
    omp_sched_t kind;
    
    omp_set_num_threads(threads);
    
    if(sched == 2){
      kind = omp_sched_dynamic;
      omp_set_schedule(kind, iter);
    }
    else {
      printf("Incorrect scheduling type entered. 1 for static, and 2 for dynamic.\n");
      return 0;
    }
    
    for(i=0; i<length; i++) {
      arr[i] = rand();
    }
    
    if(sched == 2){
      gettimeofday(&start, NULL);
      #pragma omp parallel for schedule(static)
        for(i=0; i<length; i++){
          arr[i] = arr[i]*arr[i];
        }
      gettimeofday(&end, NULL);
      printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
    }
    else {
      gettimeofday(&start, NULL);
      #pragma omp parallel for schedule(runtime)
        for(i=0; i<length; i++){
          arr[i] = arr[i]*arr[i];
        }
      gettimeofday(&end, NULL);
      printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
    }
  }
  
  return 0;
}