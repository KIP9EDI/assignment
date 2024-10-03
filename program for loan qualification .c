/* programmer ;EDISON CHEPKWONY 
CT101/G/23928/24 
Date 2/10/24 
program to determine loan qualification 
*/

#include<stdio.h>

int main ()
{
  int age;
  float salary;
  
  // promt the user to enter the age 
  printf("age");
  scanf("%d",&age);
  
  //promt the user to enter the salary 
  printf("salary");
  scanf("%f",&salary);
  
  
  // conditions to be met for loan qualification 
  if (age>=21 && salary >=21000)
{
// shows that the applicant qualify for a loan 
  printf("Congratulations,you qualify for a loan.\n");
}
else 

// shows that the applicant has not qualify for the loan 
{
printf("unfortunately, we are unable to offer you a loan at this time.\n");
}
 return 0;
}




