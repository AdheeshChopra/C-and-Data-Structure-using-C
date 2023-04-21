#include<stdio.h>
int main(){
int a;
printf("enter the number");
scanf("%d", &a);
if(a>0)
{
    printf("number is positive");
}
if(a<0)
{
    printf("number is negative");
}
if(a==0)
{
    printf("number is zero");
}
return 0;
}
