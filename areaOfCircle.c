#include<stdio.h>
#include<string.h>
#include<math.h>

float EDistance(int x1,int y1, int x2, int y2)
{
    int a = (y2-y1)*(y2-y1)+ (x2-x1)*(x2-x1);
    return sqrt(a);
}

float areaOfCircle(int x1,int y1,int x2, int y2, float (*distance)(int x1,int y1, int x2, int y2))
{
    return distance(x1,y1,x2,y2);
}
int main()
{
    int x1,x2,y1,y2;
    float dst;
    printf("Enter the value of x1: \n");
    scanf("%d", &x1);
    printf("Enter the value of x2: \n");
    scanf("%d", &x2);
    printf("Enter the value of y1: \n");
    scanf("%d", &y1);
    printf("Enter the value of y2: \n");
    scanf("%d", &y2);

    dst = areaOfCircle(x1,y1,x2,y2, EDistance);
    printf("The distance between these points is: %0.2f ", dst);
    return 0;
}