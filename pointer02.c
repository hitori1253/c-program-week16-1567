#include<stdio.h>
int testPointer2(){
    int x = 10;
    float y = 1.3f;
    char z = 'p';

    int *ptr_x = &x;
    float *ptr_y = &y;
    char *ptr_z = &z;

    printf("Value of x = %d\n", *ptr_x);
    printf("Value of x = %.2f\n", *ptr_y);
    printf("Value of x = %c\n", *ptr_z);

    printf("Size of integer pointer %lu\n", sizeof(ptr_x));
    printf("Size of float pointer %lu\n", sizeof(ptr_y));
    printf("Size of char pointer %lu\n", sizeof(ptr_z));
    return 0;


}