# include <stdio.h>

void Say_hi();

int main()
{
    Say_hi();
    return 0;
}



void Say_hi()
{
    char NameInput[20];
    int age;
    printf("Enter Your Name:");
    scanf("%s", NameInput);
    printf("Enter Your Age:");
    scanf("%d", &age);
    printf("Hello, %s Your are %d", NameInput, age);

}
