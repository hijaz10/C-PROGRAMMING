#include <stdio.h>


int main()
{
    int guesCount = 5;
    int guesNumber = 10;

    while(guesCount != 0)
    {
         int NumberInput;

    printf("Enter Number To Guess With(**NUMBER MJST BE AN INTEGER):");
    scanf("%i", &NumberInput);
    if(NumberInput == guesNumber)
    {
        printf("You are correct the number is %i\n", NumberInput);
        return 0;
    }
    else
    {
        guesCount--;
        printf("Try Again You have %i remaining chance \n", guesCount);
    }

    }

}
