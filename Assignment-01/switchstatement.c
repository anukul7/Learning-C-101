#include <stdio.h>
int main()
{
    int a;
    printf("enter a: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("anushka\n");
        break;
    case 2:
        printf("anushka kulkarni\n");
        break;
    default:
        printf("not available\n");
        break;
    }
    printf("go to home");
}
