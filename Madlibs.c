#include <stdlib.h>
#include <stdio.h>

int main()
{
    char Color[30];
    char Noun[30];
    char Celebrity[30];

    printf("Enter a Color:");
    scanf("%s", Color);
    printf("Enter a Noun:");
    scanf("%s", Noun);
    printf("Enter a Celebrity:");
    scanf("%s", Celebrity);

    printf("Roses are %s \n%s are blue \nI love %s ",Color ,Noun , Celebrity);

}