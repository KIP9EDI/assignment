/*While loop program 
Programmer ;EDISON CHEPKWONY 
            CT101/G/23928/24
Date; 09/10/24
*/
#include <stdio.h>

int main() 
{
 int start, stop, i;

 //Prompt the user to enter the start and stop values
 printf("Start value: ");
 scanf("%d", &start);
 printf("Stop value: ");
 scanf("%d", &stop);

 printf("\nWhile Loop output:\n");
 i = start;
    
 // While loop
 while (i <= stop) 
    {
        printf("%d\n", i);
        i++;
    }

 return 0;
}