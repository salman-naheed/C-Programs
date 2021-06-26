#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    char *operate;
    int num1,num2;
    operate = argv[1];
    num1 = atoi(argv[2]); 
    num2 = atoi(argv[3]);

    // printf("The operation is: %s\n", operate);
    // printf("The num1 is: %d\n", num1);
    // printf("The num2 is: %d\n", num2);

    if(strcmp(operate, "add")==0){
        printf("%d\n", num1 + num2);
    }

    else if(strcmp(operate, "subtract")==0){
        printf("%d\n", num1 - num2);
    }

    else if(strcmp(operate, "multiply")==0){
        printf("%d\n", num1 * num2); 
    }

    else if(strcmp(operate, "divide")==0){
        printf("%d\n", num1 / num2);
    }
    return 0;
}