#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,index=0;
    printf("Enter a number: ");
    scanf("%d", &a);

    do{
        printf("No. is: %d \n", index);
        index += 1;
    
    }
    while(index < a);
    return 0;
}
