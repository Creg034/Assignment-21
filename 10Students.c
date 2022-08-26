#include <stdio.h>
#include <string.h>
struct Students
{
    char name[34];
    int rollno;
    float cgpa;
    char grade;
};
void take(struct Students s[], int n);
void display(struct Students s[], int n);
int main()
{
    struct Students s[3];
    int n = 3;
    take(s, n);
    display(s, n);
    return 0;
}
void take(struct Students s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\n****[%d]****\n\n", i + 1);
        printf("Enter Name[%d]: \n", i + 1);
        fgets(s[i].name, 34, stdin);
        fflush(stdin);

        printf("Enter Roll No[%d]: \n", i + 1);
        scanf("%d", &s[i].rollno);
        fflush(stdin);

        printf("Enter cgpa[%d]: \n", i + 1);
        scanf("%f", &s[i].cgpa);
        fflush(stdin);

        printf("Enter grade (A-F)[%d]: \n", i + 1);
        scanf("%c", &s[i].grade);
        fflush(stdin);
    }
}
void display(struct Students s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("CGPA: %.2f\n", s[i].cgpa);
        printf("Grade: %c\n", s[i].grade);
        printf("Roll No: %d\n", s[i].rollno);
    }
}