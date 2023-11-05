#include <omp.h>
#include <stdio.h>

void main(){
    double a[] = {0,0,0,0,0,0,0,0,0,0};
    double alpha = 5;
    int i;
    int c = 0;

    #pragma omp parallel for private(c)
    for(i = 0; i < 10; i++){
        a[i] = alpha;
        printf("\n%f : i = %d",a[i], i);
    }

    
    for(i=0; i<10; i++){
        c++;
        printf("\n2: (%f)",a[i]);
    }
    int k = i;
    printf("\nk: %d ", k);
}
