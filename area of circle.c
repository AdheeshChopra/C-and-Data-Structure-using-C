#include<stdio.h>
#include<math.h>
#define pi 3.14f
int main(){
float radius, area;
printf("enter the radius of circle");
scanf("%f", &radius);
area= pi*radius*radius;
printf("area of circle %f", area);
return 0;
}
