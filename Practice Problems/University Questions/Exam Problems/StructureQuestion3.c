#include <stdio.h>

struct Student
{
    char name[50];
    int rollno;
    float marks[3];
};

int main()
{
    struct Student s[100];
    int n, i;
    float total, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < n; i++)
    {
        total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
        average = total / 3;

        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].rollno);
        printf("\nTotal Marks: %.2f", total);
        printf("\nAverage Marks: %.2f\n", average);
    }

    return 0;
}