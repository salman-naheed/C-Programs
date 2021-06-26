#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int chars,i=0;
    char a,b;
    char *ptr;

    while(i<2)
    {
        printf("Enter the number of characters: ");
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a: ");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b: ");
        scanf("%c", &b);
        getchar();
        ptr = (char *) malloc((chars + 1) * sizeof(char));
        printf("Enter your employee id: ");
        scanf("%s", ptr);
        printf("Your employee id is %s \n", ptr);
        free(ptr); 
        i += 1; 
    }
    return 0;
}