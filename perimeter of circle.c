#include<stdio.h>
#define pi 3.145f
int main(){
float radius, perimeter;
printf("enter the radius of circle");
scanf("%f", &radius);
perimeter=2*pi*radius;
printf("perimeter of circle %0.4f", perimeter);
return 0;
}
