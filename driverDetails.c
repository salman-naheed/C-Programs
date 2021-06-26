#include<stdio.h>
#include<string.h>

struct driver
{
    char name[20];
    char license[45];
    char route[100];
    int kms;
};
 
int main()
{
    struct driver d1,d2;
    printf("*****Enter details:*****\n");
    printf("Enter the name: \n ");
    scanf("%s", &d1.name);
    printf("Enter the License No.: \n ");
    scanf("%s", &d1.license);
    printf("Enter the route: \n ");
    scanf("%s", &d1.route);
    printf("Enter the kms: \n ");
    scanf("%s", &d1.kms);

    printf("**********The details are:************\n");
    printf("Name: %s\n", &d1.name);
    printf("License No.: %s\n", &d1.license);
    printf("Route: %s\n", &d1.route);
    printf("Kms: %s\n", &d1.kms);
    return 0;
}
