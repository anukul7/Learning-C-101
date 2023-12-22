#include <stdio.h>
int main()
{
    // calculating volume of a cone
    const float pi = 3.14;
    float radius;
    float height;
    printf("enter radius");
    scanf("%f", &radius);
    printf("enter height");
    scanf("%f", &height);
    printf("volume of a cone is : %f", 1.0 / 3.0 * pi * radius * radius * height);
}