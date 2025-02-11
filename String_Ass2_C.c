//11.Strings in C (Lab Exercise)
#include <stdio.h>
#include <string.h>
main()
{
    char str1[20], str2[20];
    printf("\n\n\t Enter a string : ");
    scanf("%s", &str1);
    printf("\n\n\t Enter another string : ");
    scanf("%s", &str2);
    strcat(str1, str2);
    printf("\n\n\t Concatenation of the string is : %s", str1);
    printf("\n\n\t Length of the string is : %d", strlen(str1));
}
