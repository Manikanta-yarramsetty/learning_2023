#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void sortStudentArray(struct Student *students, int n)
{
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n = 3;
    struct Student students[n];
    int i;
    sortStudentArray(students, n);
    for (i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("--------------------\n");
    }

    return 0;
}