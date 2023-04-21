#include<stdio.h>
#include<math.h>
#define pi 3.145f
int main(){
float radius, perimeter_of_circle, perimeter_of_rectangle, perimeter_of_square, area_of_circle, area_of_rectangle, area_of_square, sides;
printf("enter the radius of circle\n");
printf("enter the sides of rectangle\n");
printf("enter the sides of square\n");
scanf("%f%f%f", &radius, &sides, &sides);
perimeter_of_circle=2*pi*radius;
area_of_circle=pi*radius*radius;
perimeter_of_rectangle=2*(sides+sides);
area_of_rectangle=sides*sides;
perimeter_of_square=4*sides;
area_of_square=sides*sides;
printf("perimeter of circle = %f\n", perimeter_of_circle);
printf("area of circle = %f\n", area_of_circle);
printf("perimeter of rectangle = %f\n", perimeter_of_rectangle);
printf("area of rectangle = %f\n", area_of_rectangle);
printf("perimeter of square = %f\n", perimeter_of_square);
printf("area of square = %f", area_of_square);
return 0;
}
