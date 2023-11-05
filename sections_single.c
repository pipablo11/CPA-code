#include<omp.h>
#include<stdio.h>

int main(){
    /*
    omp_set_num_threads(2);
    #pragma omp parallel 
    {
        #pragma omp single nowait
        {
            printf("1");
        }
        #pragma omp single nowait
        {
            printf("2");
        }
        #pragma omp single nowait
        {
            printf("3");
        }
        #pragma omp single nowait
        {
            printf("4");
        }
    }
    printf("\n");
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            printf("1");
        }
        #pragma omp section
        {
            printf("2");
        }
        #pragma omp section
        {
            printf("3");
        }
        #pragma omp section
        {
            printf("4");
        }
    }
    printf("\n");
    #pragma omp parallel 
    {
        printf(" ");
        printf("1");
        printf("2");
        printf("3");
        printf("4");
    }
    printf("\n%f", omp_get_thread_num());
    */
    int i = 0;
    #pragma omp parallel for ordered
    for(i = 0; i < 100; i++){
        printf("%d ",i);
        #pragma omp ordered
        printf("1");
        printf("2");
        printf("3\n");
    }
}