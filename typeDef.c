# define D 2
#include <stdio.h>

typedef enum {RED, YELLOW, GREEN} color;

void main(){

    color a = YELLOW;
    if(a == RED) printf("1");
    if(a == YELLOW) printf("2");
    printf("%s", a);
}

