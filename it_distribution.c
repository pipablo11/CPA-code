#include<omp.h>
#include<stdio.h>


int main(){

    // program initiation
    const int N = 10;
    int i;
    int a[N];
    int b[N];
    int c[N];
    omp_set_num_threads(3);

    // Types of scheduling
    #pragma omp parallel for schedule(static,3)
    for(i = 0; i < N; i++){
        a[i] = omp_get_thread_num();
    }

    #pragma omp parallel for schedule(static)
    for(i = 0; i < N; i++){
        b[i] = omp_get_thread_num();
    }

    #pragma omp parallel for schedule(static)
    for(i = 0; i < N; i++){
        c[i] = omp_get_thread_num();
    }


    // printing results
    printResults(a, "A", N);
    printResults(b, "B", N);
    printResults(c, "C", N);


}

void printResults(int a[], char name[], int N){
    int i;
    printf("\n++++++ %s +++++++\n", name);
    for(i = 0; i < N; i++){
        printf(" %d ",a[i]);
    }
    printf("\n");
}