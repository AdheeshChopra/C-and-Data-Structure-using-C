#include<stdio.h>
#include<math.h>
#define pi 3.14f
int main(){
float radius, area, perimeter;
printf("enter the radius of circle");
scanf("%f", &radius);
area= pi*radius*radius;
perimeter=2*pi*radius;
printf("area of circle %f\n", area);
printf("perimeter of circle %f", perimeter);
return 0;
}
