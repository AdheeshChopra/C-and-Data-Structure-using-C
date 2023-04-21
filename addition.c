//title of program
//addition of two numbers
//header files
#include<stdio.h>
int main (){
int var1, var2;
float sum;
printf("enter two numbers to be added");
scanf("%d%d", &var1, &var2);
sum= var1+var2;
printf("%d+%d=%f", var1, var2, sum);
return 0;
}
