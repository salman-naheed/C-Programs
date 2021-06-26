#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int randomNumber(int n)
{   
    srand(time(NULL));
    return rand()%n;
}

// rock , paper , scissor
int greater(char char1, char char2)
{
    if(char1 == char2)
    {
        return -1;
    }
    else if((char1== 'r') && (char2=='p'))
    {
        return 0;
    }
    else if((char2== 'r') && (char1=='p'))
    {
        return 1;
    }
    else if((char1== 'r') && (char2=='s'))
    {
        return 1;
    }
    else if((char2== 'r') && (char1=='s'))
    {
        return 0;
    }
    else if((char1== 'p') && (char2=='s'))
    {
        return 0;
    }
    else if((char2== 'p') && (char1=='s'))
    {
        return 1;
    }
}

int main()
{
    int playerScore=0, compScore=0, temp;
    char playerChar, compChar;
    char dict[] = {'r','p','s'};
    printf("**********GAME**********\n");
    for(int i=0; i<=2; i++)
    {
        //for player
        printf("**Turn No.: %d**\n", i+1);
        printf("\nChoose\n1 for Rock\n2 for Paper\n3 for Scissors\n");
        printf("\nPlayer 1's turn: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp-1];
        printf("You Choose: %c\n\n",playerChar);

        //for Computer
        printf("Comp's turn: ");
        printf("\nChoose\n1 for Rock\n2 for Paper\n3 for Scissors\n");
        temp = randomNumber(3)+1;
        compChar = dict[temp-1];
        printf("Comp Choose: %c\n\n",compChar);

        // Comparing the winning
        if(greater(compChar,playerChar) == 1)
        {
            compScore += 1;
            printf("Comp got it!\n");
        }
        else if(greater(compChar,playerChar)==-1)
        {
            compScore +=1 ;
            playerScore += 1;
            printf("It's a tie!\n");
        }
        else{
            playerScore += 1;
            printf("You got it!\n");
        }
    printf("You: %d\nComp: %d\n\n",playerScore,compScore);
}
    if(compScore > playerScore)
    {
        printf("Comp won!!\n");
    }
    else if(compScore < playerScore)
    {
        printf("You won!!");
    }
    else{
        printf("It's a tie!\n");
    }

    printf("\nYour Score: %d\nComp's Score: %d\n\n",playerScore,compScore);
    return 0;
}