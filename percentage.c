#include <stdio.h>
int main()
{
    int phy, chem, maths;
    printf("Enter Physics, Chemistry and Maths marks : ");
    scanf("%d %d %d", &phy, &chem, &maths);
    int obtained_marks = phy + chem + maths;
    float percentage = ((obtained_marks / 300.0) * 100);
    printf("Your PCM group percentageis : %0.2f", percentage);
    return 0;
}