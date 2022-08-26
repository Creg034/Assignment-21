#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[34];
    float salery;
};
struct employee take()
{
    struct employee e;
    printf("Enter Name: ");
    fgets(e.name, 100, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    printf("Enter Id: ");
    scanf("%d", &e.id);
    printf("Enter Salery: ");
    scanf("%f", &e.salery);
    return e;
}
void showData(struct employee e)
{
    printf("%s\n", e.name);
    printf("%d\n", e.id);
    printf("%.2f\n", e.salery);
}
int main()
{
    struct employee e1;
    e1 = take();
    showData(e1);
    return 0;
}