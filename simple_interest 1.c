/*programmer ;EDISON CHEPKWONY 
  CT101-G-23928-24
  Date;2-10-24
  program to calculate simple_interest */
  
#include<stdio.h>

int main ()
{
  float principle,time,rate,simple_interest,amount;
  
  // Promt the user to enter Principle 
  printf("principle amount :");
  scanf ("%f",&principle);
  
  // Promt the user to enter time 
  printf ("time :");
  scanf ("%f",&time);
  
  // Promt the user to enter rate
  printf ("rate :");
  scanf ("%f",&rate);
  
  
  //Formula to calculate simple_interest 
  simple_interest=(principle*rate*time)/100;
  
  //Displays the output
  printf ("simple_interest:%.2f\n",simple_interest);
  
  return 0;

}














    