
//12. Structures in C (LAB EXERCISE)
#include<stdio.h>
typedef struct {
	char name[20];
	int rollnum,marks[3];
}student;

main()
{
	student details[3];
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("\n\n\t--------------- Student %d ---------------",i + 1);
        printf("\n\n\t Enter name : ");
        scanf("%s",&details[i].name);
        printf("\n\n\t Enter roll number : ");
        scanf("%d",&details[i].rollnum);
        
        for (j=0;j<3;j++)
		{
            printf("\n\n\t Enter mark of subject %d : ",j + 1);
            scanf("%d", &details[i].marks[j]);
        }
	}
	 for (i=0;i<3;i++)
	 {
        printf("\n\n\t--------------- Details of student %d ---------------",i + 1);
        printf("\nName : %s", details[i].name);
        printf("\nRoll number : %d", details[i].rollnum);
        for (j=0;j<3;j++)
		{
            printf("\nMark of subject %d : %d ", j + 1, details[i].marks[j]);
        }
    }
}

