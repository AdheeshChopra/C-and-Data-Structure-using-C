#include<stdio.h>
int main(){
int a;
printf("enter the number");
scanf("%d", &a);
if(a%11==0)
{
    printf("number is divisible by 11");
}
else
{
    printf("number is not divisible by 11");
}
return 0;
}
