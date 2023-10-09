#include <stdio.h>
int main()
{
    // Calculating area of a rectangle
    float length, width;
    printf("enter length and width");
    scanf("%f %f", &length, &width);
    printf("area of rectangle is: %f", length * width);
    return 0;
}