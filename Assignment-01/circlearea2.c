#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float radius;
    printf("enter radius");
    scanf("%f", &radius);
    printf("area is : %f", pi * radius * radius);

    return 0;
}
