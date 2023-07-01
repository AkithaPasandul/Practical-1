#include <stdio.h>
int main()
{
    int in;
    float flo;
    double dou;
    char cha;

    printf("Enter an integer value");
    scanf("%d", &in);
    printf("Enter a float value");
    scanf("%f", &flo);
    printf("Enter a double value");
    scanf("%lf", &dou);
    printf("Enter a character value");
    scanf(" %c", &cha);
    printf("The entered values are\n");
    printf("Integer: %d\n", in);
    printf("Float: %f\n", flo);
    printf("Double: %lf\n", dou);
    printf("Character: %c\n", cha);
}
