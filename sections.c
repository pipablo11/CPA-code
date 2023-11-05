#include <omp.h>
#include <stdio.h>

void main(){
    int i;
    #pragma omp parallel
    #pragma omp sections private(i)
    {
        #pragma omp section
        {
            for(i = 0; i < 10; i++){
                    printf("1");
            }
        }
        #pragma omp section
        {
            for(i = 0; i < 10; i++){
                printf("2");
            }
        }
    }       

}
