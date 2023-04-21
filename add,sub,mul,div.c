#include<stdio.h>
int main(){
float var1, var2, sum, sub, mul, div;
printf("enter the two numbers");
scanf("%f%f", &var1, &var2);
sum=var1+var2;
sub=var1-var2;
mul=var1*var2;
div=var1/var2;
printf("%f+%f=%f\n", var1, var2, sum);
printf("%f-%f=%f\n", var1, var2, sub);
printf("%f*%f=%f\n", var1, var2, mul);
printf("%f/%f=%f\n", var1, var2, div);
return 0;
}
