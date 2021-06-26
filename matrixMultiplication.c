#include<stdio.h>
#include<string.h>
int main()
{
    printf("**********Matrix Multiplication**********\n");
    int sum= 0;
    int a[2][2], b[2][2], result[2][2];

    printf("Enter your first matrix:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enter the value for first matrix %d %d element: ", i,j);
            scanf("%d", &a[i][j]);
            getchar();
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enter the value for second matrix %d %d element: ",i,j);
            scanf("%d", &b[i][j]);
            getchar();
        }
    }

//calculating
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

//Printing
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("The result is\n%d\t", result[i][j]);   
        }
        printf("\n");
    }
    return 0;
}