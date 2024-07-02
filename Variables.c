#include <stdio.h>

int main(void)
{
    // Getting User Input
    char SurnName[30];
    printf("Enter your Surname: ");
    scanf("%s", &SurnName);
    //fgets(SurnName, 20 ,stdin);
    char Name[] = "Hijaz";
    int Age = 20;

    printf("His name is %s %s and he is %i years old\n", Name, SurnName, Age);
    return 0;
} 
