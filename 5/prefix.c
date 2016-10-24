// arg 1 will be the array length, arg 2 will be the number of threads
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include <omp.h>

int main (int argc, char *argv[]) {
  srand(time(NULL));
  
  if(argc < 3) {
    printf("Incorrect number of arguments. Program terminated.");
  }
  else {
    int length = atoi(argv[1]);
    int threads = atoi(argv[2]);
    int i, j;
    int arr[length];
    int sum[length];
    struct timeval start, end;
    
    omp_set_num_threads(threads);
    
    for(i=0; i<length; i++) {
      arr[i] = rand();
    }
    
      gettimeofday(&start, NULL);
      #pragma omp parallel for schedule(dynamic,1000)
        for(i=0; i<length; i++){
          for(j=i; j>=0; j--){
            sum[i]+=arr[j];
          }
        }
      gettimeofday(&end, NULL);
      printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
  }
  
  return 0;
}