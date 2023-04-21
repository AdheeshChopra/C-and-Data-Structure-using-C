#include<stdio.h>
#include<math.h>
int main(){
float x1, x2, y1, y2, distance;
printf("enter point 1\n", x1, y1);
scanf("%f%f", &x1, &y1);
printf("enter point 2\n", x2, y2);
scanf("%f%f", &x2, &y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("distance between two points %f", distance);
return 0;
}
