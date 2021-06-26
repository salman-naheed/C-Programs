#include<stdio.h>
#include<string.h>
int main()
{
    int n,b;
    printf("Enter last index value: ");
    scanf("%d", &n);
    b = (n*n+n)/2;
    printf("Result of natural numbers: %d ", b);
    return 0;
}