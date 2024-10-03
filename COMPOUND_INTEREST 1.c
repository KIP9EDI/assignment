/*programmer ;EDISON CHEPKWONY 
  CT101-G-23928-24
  Date;2-10-24
  program to calculate compound interest */
  
#include<stdio.h>
#include <math.h>  // For pow ()

int main ()
{
  float principle,time,rate,compound_interest,amount;
  int n;
  
  // Promt the user to enter Principle 
  printf("principle :");
  scanf ("%f",&principle);
  
  // Promt the user to enter time 
  printf ("time :");
  scanf ("%f",&time);
  
  // Promt the user to enter rate
  printf ("rate :");
  scanf ("%f",&rate);
  
  //Promt the user to enter the value of n 
  printf ("enter the value of n;");
  scanf ("%d",&n);
  
  //Formula to calculate amount and compound_interest 
  amount =principle * pow((1+rate/(n*100)),n*time);
  compound_interest = amount-principle;
  
  printf ("amount :%.2f\n",amount);
  printf ("compound_interest: %.1f\n",compound_interest);
  
  return 0;

}














