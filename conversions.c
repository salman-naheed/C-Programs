#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int val;
        float kmToMiles = 0.621371;
        float inchesToFoot = 0.0833333;
        float cmToInches = 0.393701;
        float poundsToKgs = 0.453592;
        float inchesToMeters = 0.0254;
        float userInput;
        float total;

        printf("1- kms to miles\n2- inches to foot\n3- cms to inches\n4- pound to kgs\n5- inches to meters\n6- To quit the program...\n ");
        printf("Enter your conversion: \n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            printf("*****Kms to Miles*****\n");
            printf("Enter kms to convert into miles: ");
            scanf("%f", &userInput);
            total = userInput * kmToMiles;
            printf("Converted: %f miles\n", total);
            break;
        case 2:
            printf("*****Inches to foot*****\n");
            printf("Enter Inches to convert into foot: ");
            scanf("%f", &userInput);
            total = userInput * inchesToFoot;
            printf("Converted: %f foot\n", total);
            break;
        case 3:
            printf("*****Cm to inches*****\n");
            printf("Enter Cm to convert into inches: ");
            scanf("%f", &userInput);
            total = userInput * cmToInches;
            printf("Converted: %f inches\n", total);
            break;
        case 4:
            printf("*****Pounds to kgs*****\n");
            printf("Enter Pounds to convert into kgs: ");
            scanf("%f", &userInput);
            total = userInput * poundsToKgs;
            printf("Converted: %f kgs\n", total);
            break;
        case 5:
            printf("*****Inches to meters*****\n");
            printf("Enter Inches to convert into meters: "); 
            scanf("%f", &userInput);
            total = userInput * inchesToMeters;
            printf("Converted: %f meters\n", total);
            break;
        case 6:
            printf("Quitting the program...");
            goto end;
        default:
            break;
        system("CLS");
        }
    }
end:
    return 0;
}