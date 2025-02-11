//9. Arrays in C (Lab Exercise)
#include <stdio.h>
main()
{
    int a[5],i,j;
    for (i=0;i<5;i++)
	{
        printf("\n\n\t Enter element : ");
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
	{
        printf("\n\n\t Element[%d] : %d",i,a[i]);
    }
    printf("\n\n\t--------------- Matrix sum of elements program ---------------\n");
    int a1[3][3], sum = 0;
    for (i=0;i<3;i++)
	{
        for (j=0;j<3;j++)
		{
            printf("\nEnter Element : ");
            scanf("%d",&a1[i][j]);
        }
    }
    printf("\n\n\t--------------- Matrix ---------------\n");
    for (i=0;i<3;i++)
	{
        for (j=0;j<3;j++)
		{
            printf("%d",a1[i][j]);
            sum += a1[i][j];
        }
        printf("\n");
    }
    printf("Sum of the elements of the matrix is : %d", sum);
}
