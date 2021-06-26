#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i= 0;
    while(i<100){
        i +=1;
        printf("value of i : %d \n ", i);
        if(i==50){
            break;
        }
    }
    printf("breaked at %d", i);
    return 0;
}
