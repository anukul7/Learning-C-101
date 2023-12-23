#include <stdio.h>
int main()
{
    printf("enter a");
    scanf("%d", &a);
    if (a)
        printf("inside of block");
    printf("out of if block");
    return 0;
}