#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr = NULL;
    char string[124];

    // //Reading a file
    ptr = fopen("myfile.txt","r");
    fscanf(ptr, "%s", string);
    printf("It has %s", string);

    //writing
    // ptr = fopen("myfile.txt","a");
    // fprintf(ptr, %s, string);
    // printf("It has '%s '", string);

    return 0;
}