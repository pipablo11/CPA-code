#include <omp.h>
#include <stdio.h>

void main(){
    int i;
    int b = 0;
    int a[10] = {1,1,1,1,1,1,1,1,1,1};
    int d[10] = {1,1,1,1,1,1,1,1,1,1};
    omp_set_num_threads(2);
    #pragma omp parallel for
    for(i = 0; i < 1000000000; i++){
        int c = 0;
        a[i%10] = ++b;  // race condition as b is private 
        d[i%10] = ++c;  
    }

    for(i=0; i<10; i++){
        printf("\n%d",a[i]);
    }
    printf("%f", omp_get_wtime());
    // numbers not sorted == parallel computation
}

