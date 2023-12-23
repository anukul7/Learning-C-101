#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div;
    char operator;
    printf("enter operator");
    scanf("%c", &operator);
    printf("enter two operants");
    scanf("%d%d", &a, &b);
    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("sum is %d", sum);
        break;
    case '-':
        sub = a - b;
        printf("sub is %d", sub);
        break;
    case '*':
        mul = a * b;
        printf("mul is %d", mul);
        break;
    case '/':
        div = a / b;
        printf("div is %d", div);
        break;
    default:
        printf("not available");
    }
    return 0;
}