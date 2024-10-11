/* For loop program 
programmer ;EDISON CHEPKWONY 
           CT101/G/23928/24
Date; 09/10/24
*/
#include <stdio.h>

int main() {
    int start, stop;
    // Prompt the user to enter the start and stop values
    printf("Input the start value: ");
    scanf("%d", &start);
    printf("Input the stop value: ");
    scanf("%d", &stop);

    printf("\nValues of loop:\n");
    // For loop
    for (int i = start; i <= stop;
     i++) 
    {
        printf("%d\n", i);
    }

    return 0;
}