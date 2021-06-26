#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    int i, count = 0;
    char *resultString;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);
    //this is a pen
    for (i = 0; str[i] != '\0'; i++)
    {
        //Counting the numbers in the oldword string
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            //jumping to next word
            i += oldWordLength - 1;
        }
    }
    // making a new string to replace the fit words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        //comparing the string if found that word to be change
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    char str[200];
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");

    fgets(str, 200, ptr);
    printf("The given template is: %s \n\n", str);

    char *newStr;
    newStr = replaceWord(str, "{{item}}", "Table");
    newStr = replaceWord(newStr, "{{outlet}}", "Shop");
    newStr = replaceWord(newStr, "{{name}}", "Salmon");
    printf("The generated bill is: %s \n\n", newStr);

    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}