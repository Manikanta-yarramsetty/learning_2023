#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};
void initializeStudentArray(char *inputString, struct Student *students, int n)
{
    int i;
    char *token;
    token = strtok(inputString, " ");

    for (i = 0; i < n; i++)
    {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
    }
}

int main()
{
    int n = 3;
    char inputString[] = "1001 Aron 100.00";
    struct Student students[n];
    int i;
    initializeStudentArray(inputString, students, n);
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