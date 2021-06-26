#include<stdio.h>

void triangular()
{
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            if(j<=i)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}

void ReverseTriangular()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(j<=6-i)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Enter 0 for Triangular and 1 for Reverse Triangular: ");
    scanf("%d", &a);
    switch (a)
    {
    case 0:
        triangular();
        break;
    case 1: 
        ReverseTriangular(); 
    default:
        break;
    }
    return 0;
}