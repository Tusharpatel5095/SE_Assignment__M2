//10. Pointers in C (Lab Exercise)
#include <stdio.h>
main()
{
    int a = 10;
    printf("\n\n\t Original value : %d", a);
    int *pa = &a;
    *pa = 25;
    printf("\n\n\t Edited value : %d", a);
}
