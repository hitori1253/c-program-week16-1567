#include<stdio.h>
void modifyValye(int a){
    a=15;
}
int testFunction(){
    int x = 16;
    printf("call by value:\n");
    printf("testFunction : Before modify functinx = %d\n",x);

    modifyValye(x);
    printf("testFunction : After modify functinx = %d\n",x);
    return 0;
}