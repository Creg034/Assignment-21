#include <stdio.h>
#include <string.h>
struct SortSalery
{
    int id;
    char name[34];
    float salery;
};
int take(struct SortSalery e[], int n);

int sortarr(struct SortSalery s[], int n);
int main()
{
    int n = 4;
    struct SortSalery e[n];
    take(e, n);
    sortarr(e, n);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", e[i].name);
        printf("%d\n", e[i].id);
        printf("%.2f\n", e[i].salery);
    }
    return 0;
}
int swap(struct SortSalery a[], int i, int j)
{
    float tempSal = a[i].salery;
    a[i].salery = a[j].salery;
    a[j].salery = tempSal;

    char name[34];
    strcpy(name, a[i].name);
    strcpy(a[i].name, a[j].name);
    strcpy(a[j].name, name);

    int tempid = a[i].id;
    a[i].id = a[j].id;
    a[j].id = tempid;
}
int take(struct SortSalery e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name: ");
        fgets(e[i].name, 34, stdin);
        e[i].name[strlen(e[i].name) - 1] = '\0';
        fflush(stdin);

        printf("Enter Id[%d]: ", i);
        scanf("%d", &e[i].id);
        fflush(stdin);

        printf("Enter Salery[%d]: ", i);
        scanf("%f", &e[i].salery);
        fflush(stdin);
    }
}
int sortarr(struct SortSalery s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].salery > s[j].salery)
            {
                swap(s, i, j);
            }
        }
    }
}
// Nice Question to learn concepts