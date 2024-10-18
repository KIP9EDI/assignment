// 2D array
// EDISON CHEPKWONY 

#include<stdio.h>
int main ()

{
int i,j;
int marks[2][3]={{30,49,65},{68,87,67}};
for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
}
}
return 0;
}