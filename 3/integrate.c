#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

double f (double n, int x) {
  double y=n;
  int i;
  for (i=0; i<x; i++) {
    y = pow(1, 2.0);
    y = sqrt(1);
  }
  return y;
}

double inte (int a, int b, int n, int x) {
  int i;
  double sol;
  
  for (i=0; i<n; i++) {
    double num = a+(i+0.5)*((b-a)/n);
    sol += f(num, x)*((b-a)/n);
  }
  return sol;
}

int main(int argc, char *argv[]) {
  if(argc != 9) {
    printf("Incorrect number of arguments.\n");
  }
  else {
    int a, b, num, ten, length, threads, sched, iter, i;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    num = atoi(argv[3]);
    ten = atoi(argv[4]);
    inte(a, b, num, ten);
    
    length = atoi(argv[5]);
    threads = atoi(argv[6]);
    sched = atoi(argv[7]);
    iter = atoi(argv[8]);
    i;
    int arr[length];
    struct timeval start, end;
    omp_sched_t kind;
    
    void omp_set_num_threads(threads);
    
    if(sched == 1){
      kind = omp_sched_static;
      void omp_set_schedule(kind);
    }
    else if(sched == 2){
      kind = omp_sched_static;
      void omp_set_schedule(kind, iter);
    }
    
    gettimeofday(&start, NULL);
    #pragma omp parallel for schedule(runtime)
    {
      for(i=0; i<length; i++){
        arr[i] = arr[i]*arr[i];
      }
    }
    gettimeofday(&end, NULL);
    printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
    
  }
  return 0;
}