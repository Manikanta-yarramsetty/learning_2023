#include <stdio.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(struct Student *students, int n, const char *searchName)
{
    int i;
    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (strcmp(students[i].name, searchName) == 0)
        {
            printf("Student Found!\n");
            printf("Roll Number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student Not Found!\n");
    }
}

int main()
{
    int n = 3;
    struct Student students[n];
    int i;
    const char *searchName = "Aron";
    searchStudentByName(students, n, searchName);

    return 0;
}