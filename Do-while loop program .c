/*Do while loop program 
programmer ;EDISON CHEPKWONY 
           CT101-G-23928-24 
Date; 09/10/24
*/           


#include <stdio.h>

int main() 
{
  int start, stop, i;

  // Prompt the user to enter the start and stop values
  printf("Input the start value: ");
  scanf("%d", &start);
  printf("Input the stop value: ");
  scanf("%d", &stop);

  printf("\nDo-While Loop output:\n");
  i = start;

  // Do-while loop
  do 
  {
  printf("%d\n", i);
        i++;
  } 
  while (i <= stop);

  return 0;
}