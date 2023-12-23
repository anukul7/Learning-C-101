#include <stdio.h>
int main()
{
    char ch;
    printf("enter ch");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("it is a vowel\n");
        break;
    default:
        printf("it is not a vowel\n");
    }
    printf("thankyou");
}