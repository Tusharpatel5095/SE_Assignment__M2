// 4.Operators in C (Lab Exercise)
#include <stdio.h>
main()
{
    int x, y;
    printf("\n\n\t Enter a value for Num1 : ");
    scanf("%d", &x);
    printf("\n\n\t Enter a value for Num2 : ");
    scanf("%d", &y);
    printf("\n\n\tArithmetic Operators");
    printf("\n\n\t------------------------------------------");
    printf("\n\n\t Num1 + Num2 = %d", x + y);
    printf("\n\n\t Num1 - Num2 = %d", x - y);
    printf("\n\n\t Num1 * Num2 = %d", x * y);
    printf("\n\n\t Num1 / Num2 = %d", x / y);
    printf("\n\n\t Logical Operators");
    printf("\n\n\t------------------------------------------");
    printf("\n\n\t Num1 AND Num2 = %d", x && y);
    printf("\n\n\t Num1 OR Num2 = %d", x || y);
    printf("\n\n\t NOT(Num1) = %d", !x);
    printf("\n\n\tRelational Operators");
    printf("\n\n\t------------------------------------------");
    printf("\n\n\t Num1 == Num2 : %d", x == y);
    printf("\n\n\t Num1 != Num2 : %d", x != y);
    printf("\n\n\t Num1 > Num2 : %d", x > y);
    printf("\n\n\t Num1 < Num2 : %d", x < y);
    printf("\n\n\t Num1 >= Num2 : %d", x >= y);
    printf("\n\n\t Num1 <= Num2 : %d", x <= y);
}
