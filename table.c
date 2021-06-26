#include <stdio.h>

int main()
{
    int a, b, i;
    printf("Enter a table number: ");
    scanf("%d", &a);

    printf("Enter your limit: ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++){ 
        printf("%d * %d = %d \n", a, i, a*i);
    }
    return 0;
    
}
