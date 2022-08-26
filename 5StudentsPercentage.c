#include <stdio.h>
#include <string.h>
struct students
{
    int rollno;
    char name[34];
    float maths_marks;
    float Physics_marks;
    float chemistry_marks;
};

void take(struct students s[]);
void percent(struct students s[])
{
    float total;
    for (int i = 0; i < 5; i++)
    {
        total = s[i].chemistry_marks + s[i].maths_marks + s[i].Physics_marks;
        total /= 300.0;
        total *= 100.0;
        printf("Student[%d] Obtained %.2f%c Marks\n", i, total, 37);
        total = 0;
    }
}

int main()
{
    struct students s[5];
    take(s);
    percent(s);
    return 0;
}
void take(struct students s[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name of Student[%d]: ", i);
        fgets(s[i].name, 34, stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        fflush(stdin);

        printf("Enter ROll No. of Student[%d]: ", i);
        scanf("%d", &s[i].rollno);
        fflush(stdin);

        printf("Enter Physics of Student[%d]: ", i);
        scanf("%f", &s[i].Physics_marks);
        fflush(stdin);

        printf("Enter Maths Marks of Student[%d]: ", i);
        scanf("%f", &s[i].maths_marks);
        fflush(stdin);

        printf("Enter Chemistry Marks of Student[%d]: ", i);
        scanf("%f", &s[i].chemistry_marks);
        fflush(stdin);
    }
}