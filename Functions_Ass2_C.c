//8. Functions in C (Lab Exercise)
#include <stdio.h>
int fact(int);
main()
{
    int num,ans;
    printf("\n\n\t Enter a number : ");
    scanf("%d", &num);
    ans = fact(num);
    printf("\n\n\t Factorial of %d = %d", num, ans);
}
int fact(int n)
{
    int ans = 1, n1;
    n1 = n;
    while (ans < n1)
	{
        n *= ans;
        ans += 1;
    }
    return n;
}
