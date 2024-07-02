#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("Record.txt", "a");

    if (fpointer == NULL)
    {
        printf("Failed to open the file.\n");
        return 1; 
    }

    char carName[500];  
    char rating[10];   

    printf("Enter car name and rating (e.g., 'Mercedes S Class, 4.8'): \n");

    fgets(carName, sizeof(carName), stdin);
    fgets(rating, sizeof(rating), stdin);

    // Remove newline characters if present
    carName[strcspn(carName, "\n")] = '\0';
    rating[strcspn(rating, "\n")] = '\0';

    fprintf(fpointer, "%s, %s\n", carName, rating);

    fclose(fpointer);

    printf("Car record added to 'Record.txt' successfully.\n");

    return 0;
}
