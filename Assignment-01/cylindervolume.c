#include<stdio.h>
int main()
{
//calculating volume of a cylinder
const float pi = 3.14;
float radius;
float height;
printf("enter radius");
scanf("%f", &radius);
printf("enter height");
scanf("%f", &height);
printf("volume of a sphere is : %f", pi * radius * radius * height);
return 0;
}