#include<stdio.h>
int main(){
int a;
printf("enter the value of a\n");
scanf("%d", &a);
if(a%2==0)
{
    printf("a is even and number is %d", a);
}
else
{
    printf("a is odd and number is %d", a);
}
return 0;
}
