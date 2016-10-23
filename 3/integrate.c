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
  if(argc != 8) {
    printf("Incorrect number of arguments.\n");
  }
  else {
    int a, b, num, ten, threads, sched, iter, i;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    num = atoi(argv[3]);
    ten = atoi(argv[4]);
    inte(a, b, num, ten);
    
    threads = atoi(argv[5]);
    sched = atoi(argv[6]);
    iter = atoi(argv[7]);
    struct timeval start, end;
    omp_sched_t kind;
    double sol=0;
    
    omp_set_num_threads(threads);
    
    if(sched == 2){
      kind = omp_sched_dynamic;
      omp_set_schedule(kind, iter);
    }
    else {
      printf("Incorrect scheduling type entered. 1 for static, and 2 for dynamic.\n");
      return 0;
    }
    
    if(sched == 2){
      gettimeofday(&start, NULL);
      #pragma omp parallel for schedule(static)
        for(i=a; i<b; i++){
          sol+=inte(i, i+1, num, ten);
        }
      gettimeofday(&end, NULL);
      printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
    }
    else {
      gettimeofday(&start, NULL);
      #pragma omp parallel for schedule(runtime)
        for(i=a; i<b; i++){
          sol+=inte(i, i+1, num, ten);
        }
      gettimeofday(&end, NULL);
      printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
    }
    
  }
  return 0;
}