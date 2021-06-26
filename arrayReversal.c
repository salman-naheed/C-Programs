#include <stdio.h>
#include <string.h>

void arrayRev(int ptr[])
{
    for(int i=0; i<10/2; i++)
    { 
        int temp;
        temp = ptr[i];
        ptr[i] = ptr[9-i];
        ptr[9-i] = temp;
    }

}

void print(int ptr[])
{
    for(int i=0; i<10; i++)
    {
    printf("The value of element %d is %d \n", i,ptr[i]);
    }
}


int main()
{
    //char arr[] = {'0','1','2','3','4','5','6','7','8','9', '\0'};
    int arr[] = {0,1,2,3,4,5,6,7,8,9}; 
    arrayRev(arr);
    print(arr);
    return 0;
}
  