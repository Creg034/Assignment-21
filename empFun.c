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

int main()
{
    struct employee e1;
    e1 = take();
    printf("%s\n%d\n%.2f",e1.name,e1.id,e1.salery);
    return 0;
}