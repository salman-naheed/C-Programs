#include<stdio.h>
#include<string.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*fPtr)(int,int);
    fPtr = &sum; //Function Pointer
    int d = (*fPtr)(10,5);
    printf("Sum:  %d\n", d );
    return 0;
}