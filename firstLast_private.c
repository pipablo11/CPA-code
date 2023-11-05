#include <omp.h>
#include <stdio.h>

void main(){
    double a[] = {0,0,0,0,0,0,0,0,0,0};
    double alpha = 5;
    int i;
    #pragma omp parallel for 
    for(i = 0; i < 10; i++){
        a[i] = alpha;
        printf("\n%f : i = %d",a[i], i);
    }

    
     for(i=0; i<10; i++){
        printf("\n%f",a[i]);
    }
    int k = i;
    printf("\nk: %d ", k);
}
