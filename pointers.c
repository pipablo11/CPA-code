#include <stdio.h>



//void functPointer1(int n, double a, double *x, double *y) same meaning
void functPointer(int n, double a, double x[], double y[]){
    int i = 0;
    for(i = 0; i < n; i++){
        printf("y = %2.2f * %2.2f + %2.2f\n", y[i], a, x[i]);
        y[i] = a*x[i] + y[i];
        printf("y:%10.1f\n", y[i]);
        /*
        %n.mf --> print float
        n -> characters to be printed " " or a number (" " + num + num of decimals)
        m -> num of decimals
        */
    }
}

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

    double x[4] = {10, 20, 30, 40};
    double y[4] = {1, 2, 3,4};

    char string[] = "Y eso es todo";

    //functPointer(4,1.0,x,y);

    char *pointX = &string[2];

    printf("\npointX points to: %c ", *pointX);
    pointX = pointX + 2;
    printf("\nnow to: %c ", *pointX);
    pointX = pointX + 8;
    printf("\nnow to: %d ", *pointX);

    printf("\n%s", string);

}





