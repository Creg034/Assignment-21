#include <stdio.h>
struct employee
{
    char name[34];
    int age;
    float salery;
};
struct employee takeStr()
{
    struct employee e;
    printf("Enter Your Name Below: \n");
    scanf("%s", &e.name);
    printf("Enter Your Age: \n");
    scanf("%d", &e.age);
    printf("Enter Your Salery: \n");
    scanf("%f", &e.salery);
    return e;
}
void displayStruct(struct employee e)
{
    printf("\nName: %s\n", e.name);
    printf("\nAge: %d\n", e.age);
    printf("\nSalery: %.2f\n", e.salery);
}
int main()
{
    struct employee e1, e2, e3;
    e1 = takeStr();
    e2 = takeStr();
    e3 = takeStr();
    displayStruct(e1);
    printf("\n*******\n");
    displayStruct(e2);
    printf("\n*******\n");
    displayStruct(e3);
    printf("\n*******\n");
    return 0;
}