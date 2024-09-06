#include<stdio.h>
void modifyValye(int *a){
    *a=15;
    printf("Address of pointert1 a %d\n",&a);
}


int testFunction(){
    int x = 16;
    printf("call by reference:\n");
    printf("testFunction : Before modify functinx = %d\n",x);

    modifyValye(&x);
    printf("Address of x %d\n",&x);
    printf("testFunction : After modify functinx = %d\n",x);
    return 0;
}