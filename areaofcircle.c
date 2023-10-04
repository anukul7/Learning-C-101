#include <stdio.h>
int main()
{
    float radius;
    printf("enter radius");
    scanf("%f", &radius);
    const double pi = 3.14;
    printf("the value of pi is : %fl\n" , pi);
    printf("area is : %f", 3.14 * radius * radius);
    return 0;
}
