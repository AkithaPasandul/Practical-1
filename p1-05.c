#include <stdio.h>
int main()
{
    double num1, num2, avg;
    printf("Enter the first number");
    scanf("%lf", &num1);
    printf("Enter the second number");
    scanf("%lf", &num2);
    avg= (num1 + num2)/2;
    printf("The average is: %.2lf\n",avg);
}
