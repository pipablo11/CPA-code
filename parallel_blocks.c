#include<omp.h>
#include<stdio.h>

int main(){
    const int N = 1000;
    int count = 0;
    int i;
    int a[N];
    printf("%d\n", a[0]);
    
    
    #pragma omp parallel
    {
        #pragma omp for nowait 
        for(i = 0; i < N; i++){
            a[i] = omp_get_thread_num() + 1;
        }
        for(i = 0; i < N; i++){
            if(a[i] == 0) count++;
        }
      
    }

    for(i = 0; i < N; i++){
        printf(" %d ",a[i]);
    }

    printf("\n %d", count);

}