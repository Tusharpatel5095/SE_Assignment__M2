
// 7. Loop Control Statements (Lab exercise)
#include <stdio.h>
main()
{
    int i;
    i = 0;
    while (1)
	{
        i++;
        if (i == 3) continue;
        	printf("\n\t %d", i);
        	if (i == 5) break;
    }
}

