#include <stdio.h>
int main()
{
    float base;
    float height;
    printf("enter base");
    scanf("%f", &base);
    printf("enter height");
    scanf("%f", &height);
    printf("area of a parallelogram is : %f", base * height);
    return 0;
}