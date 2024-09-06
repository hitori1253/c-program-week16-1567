#include<stdio.h>
int testPointer3(){
    int var = 10;
    int *intptr = &var;
    int **ptrptr = &intptr;

    printf("Var:%d\nAddress of var: %d\n", var, &var);
    printf("intptr:%d\nAddress of intptr: %d\n", intptr, &intptr);
    printf("var:%d\nValue of intptr: %d\n",var, *intptr);
    printf("var:%d\nValue of intptr: %d\n",ptrptr, &ptrptr);
}