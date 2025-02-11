// Looping in C (Lab exercise)
#include <stdio.h>
main()
{
    int x = 1;
    printf("\n\n\t While loop---------------------------");
    while (x <= 10){
        printf("\n\n\t %d", x);
        x++;
    }
    printf("\n\n\t for loop---------------------------");
    for (x = 1; x <= 10; x++)
    {
        printf("\n\n\t %d", x);
    }
    printf("\n\n\t do While loop---------------------------");
    x = 1;
    do
    {
        printf("\n\n\t %d", x);
        x++;
    } while (x <= 10);   
}
