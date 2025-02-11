// 5. Control Flow Statements in C (Lab Exercise)
#include <stdio.h>
main()
{
    int x,y;
    printf("\n\n\t Enter a number : ");
    scanf("%d",&x);
    if (x % 2 == 0) printf("\n\n\t The number is Even");
    else printf("\n\n\t The number is Odd");
    printf("\n\n\t Enter the month's number : ");
    scanf("%d",&y);
    switch (y)
    {
    case 1: printf("\n\n\t January"); break;
    case 2: printf("\n\n\t February"); break;
    case 3: printf("\n\n\t March"); break;
    case 4: printf("\n\n\t April"); break;
    case 5: printf("\n\n\t May"); break;
    case 6: printf("\n\n\t June"); break;
    case 7: printf("\n\n\t July"); break;
    case 8: printf("\n\n\t August"); break;
    case 9: printf("\n\n\t September"); break;
    case 10: printf("\n\n\t Octomber"); break;
    case 11: printf("\n\n\t November"); break;
    case 12: printf("\n\n\t December"); break;
    default: printf("\n\n\t Invalid Input"); 
    }
}
