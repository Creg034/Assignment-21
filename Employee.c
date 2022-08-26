#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[34];
    double salery;
};
int main()
{
    struct Employee e1;
    // Defined Structure
    e1.id = 4;
    strcpy(e1.name, "Gaurav");
    e1.salery = 993400.69;
    return 0;
}