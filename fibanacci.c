#include <stdio.h>
// 0,1,1,2,3,5,8,13,21........

int fibRecursive(int n){
    if ((n==1) || (n==2))
    {
        return n-1;
    } 
    else{
        return fibRecursive(n-1) + fibRecursive(n-2);
    }
}

int fibIterative(int n){
    int a=0,b=1;
    for(int i =0; i<(n-1);i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

int main(){
    int val;
    printf("Enter the index to get the value: ");
    scanf("%d",&val);
    printf("The value for Fib Recursion at index %d is %d \n ",val, fibRecursive(val));
    printf("The value for Fib Iterative at index %d is %d \n ",val, fibIterative(val));
    return 0;
}