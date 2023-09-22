#include <stdio.h>

void main(){
    /*
    const int N = 5;
    int values[N];
    printf("write 5 integers");
    for(int i = 0; i < N; i++){
        // pointer array position
        scanf("%d", &values[i]);
    }

    for(int i = 0; i < N; i++){
        printf("%d", values[i]);
    }
    */
    int values[5] = {1, 2, 3, 4, 5};

    int *p = &values[4];
    int d1 = values[4];
    values[4] = 10;

    printf("pointer: %d \nvalue: %d \npoiner value: %d", p, d1, *p);
}