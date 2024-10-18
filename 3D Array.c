// 3D array
// EDISON CHEPKWONY 

#include<stdio.h>
int main ()

{
int i,j,k;
int marks[2][2][3]={{ {30,49,65},{68,87,67}},{{55,60,80},{39,40,75} }};
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(k=0;k<3;k++){
printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
}
}
}
return 0;
}