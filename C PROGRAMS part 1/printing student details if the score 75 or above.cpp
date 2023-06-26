#include <stdio.h>
struct student 
{
 char name[50];
 int roll;
 float marks;
} student[10];
int main() 
{
    int i,n;
    printf("enter the number of students:");
    scanf("%d",&n);
    printf("Enter information of students:\n");
    for (i=0;i<n;++i) 
	{
        student[i].roll= i+1;
        printf("\nFor roll number%d,\n", student[i].roll);
        printf("\nEnter name: ");
        scanf("%s",&student[i].name);
        printf("\nEnter marks: ");
        scanf("%f",&student[i].marks);
    }
    printf("Displaying Information:\n\n");
    for (i=0;i<n;++i) 
	{
        if(student[i].marks>=75)
		{
		printf("\nRoll number: %d\n",i+1);
        printf("\n name: ");
        puts(student[i].name);
        printf("\n Marks: %.1f", student[i].marks);
        printf("\n");
    }
    }
    return 0;
}
