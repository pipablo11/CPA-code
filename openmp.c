#include <omp.h>
#include <stdio.h>

void main(){
    int i;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    #pragma omp parallel for
    for(i=0; i<10; i++){
        printf("\n%d",a[i]);
    }
    // numbers not sorted == parallel computation
}