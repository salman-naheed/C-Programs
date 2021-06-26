#include <stdio.h>
#include <string.h>

void parser(char * s)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (s[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            s[index] = s[i]; //   "<h1>             My name is Salman</h1>"
            index++;
        }
    }

    s[index] = '\0';
    while (s[0] == ' ')
    {
        for (int i = 0; i < strlen(s); i++) 
        {
            s[i] = s[i + 1];
        }
    }  
 
    while(s[strlen(s) - 1]== ' ')
    {
        s[strlen(s) - 1] = '\0' ;
    }
}
int main()
{
    char string[] = "<h1>             My name is Salman</h1>";
    parser(string);
    printf("-%s-", string);
    return 0;
}