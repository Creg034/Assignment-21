#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct FirstStruct
{
    int age;
    char name[34];
    float salery;
} f[4];

int main()
{
    struct FirstStruct f[4];
    printf("Enter Your Name: ");
    scanf("%s", &f[0].name);
    // strcpy(f[0].name, "Gaurav");
    fflush(stdin);
    printf("Enter Your Age: ");
    scanf("%d", &f[0].age);
    fflush(stdin);
    printf("Enter Salery: ");
    scanf("%f", &f[0].salery);
    fflush(stdin);
    system("cls");

    printf("Name: %s\n", f[0].name);
    printf("Age: %d\n", f[0].age);
    printf("Salery: %.2f\n", f[0].salery);
    return 0;
}