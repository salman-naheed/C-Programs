#include<stdio.h>
#include<string.h>

int isPalindrome(int num)
{
    int reverseNum = 0;
    int orignalvalue = num;
    while(num!=0)
    {
        reverseNum = reverseNum*10 + num%10; 
        num = num/10;
    }
    printf("The reversed number is: %d\n", reverseNum);
    if(orignalvalue == reverseNum)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter a number to check palindrome: ");
    scanf("%d", &num);
    if(isPalindrome(num))
    {
        printf("It is palindrome.");
    }
    else{
        printf("Not a palindrome.");
    }
    return 0;
}