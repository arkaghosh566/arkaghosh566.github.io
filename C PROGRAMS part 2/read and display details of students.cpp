#include <stdio.h>
struct student 
{
 char name[50];
 int roll;
 float marks;
} student_details;
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    gets(student_details.name);
    printf("Enter roll number: ");
    scanf("%d", &student_details.roll);
    printf("Enter marks: ");
    scanf("%f", &student_details.marks);
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", student_details.name);
    printf("\nRoll number: %d\n", student_details.roll);
    printf("Marks: %.1f\n", student_details.marks);
    return 0;
}
