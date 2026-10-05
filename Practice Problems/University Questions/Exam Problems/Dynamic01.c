#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, extra, total_students;
    int *marks;
    int total = 0;
    float average;

    // Number of initial students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory
    marks = malloc(n * sizeof(int));

    // Read initial marks
    printf("Enter marks of %d students:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Additional students
    printf("Enter number of additional students: ");
    scanf("%d", &extra);
c
    total_students = n + extra;

    // Increase memory
    marks = realloc(marks, total_students * sizeof(int));

    // Read marks of additional students
    printf("Enter marks of %d additional students:\n", extra);

    for (int i = n; i < total_students; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Calculate total
    for (int i = 0; i < total_students; i++)
    {
        total += marks[i];
    }

    average = (float)total / total_students;

    printf("\nTotal marks = %d", total);
    printf("\nAverage marks = %.2f", average);

    // Release memory
    free(marks);

    return 0;
}