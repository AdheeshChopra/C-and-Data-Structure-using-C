//title of program
//division of two numbers
//header files
#include<stdio.h>
int main (){
float var1, var2, div;
printf("enter two numbers to be divided");
scanf("%f%f", &var1, &var2);
div= var1/var2;
printf("%f/%f=%f", var1, var2, div);
return 0;
}
