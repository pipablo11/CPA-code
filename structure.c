// structure -> collection of heterogeneus data
#include<stdio.h>
struct complex{
    double re,im;
}

main(){
    struct complex c1;

    c1.re = 1.0;
    c1.im = 2.0;

    // access attributes
    printf("complex re: %2.2f", c1.re);
    printf("\ncomplex im: %2.2f", c1.im);

    struct complex *c2 = &c1;

    // access attributes when pointer
    printf("\ncomplex re: %2.2f", c2 -> re);
    c2 -> re = 2.0;

    printf("\ncomplex re: %2.2f", c1.re); 

}