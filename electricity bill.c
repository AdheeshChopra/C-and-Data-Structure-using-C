#include<stdio.h>
#include<math.h>
int main(){
float unit_consumed, total_cost;
printf("unit consumed by costumer \n");
scanf("%f", &unit_consumed);
if(unit_consumed<200)
{
    total_cost=unit_consumed*1.20;
}
else if(unit_consumed>=200 & unit_consumed<400)
{
    total_cost=unit_consumed*1.50;
}
else if(unit_consumed>=400 & unit_consumed<600)
{
    total_cost=unit_consumed*1.80;
}
else if(unit_consumed>=600)
{
    total_cost=unit_consumed*2.00;
}
else
{
    total_cost=unit_consumed*2.00;
}
printf("payable amount is %f", total_cost);
return 0;
}
