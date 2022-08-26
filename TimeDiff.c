#include <stdio.h>
struct time
{
    int hours;
    int minutes;
};
int checkTime(struct time t[])
{
    int ansh = 0;
    int ansm = 0;
    t[0].hours;
    t[1].hours;

    if (t[0].hours > t[1].hours)
    {
        t[1].hours += 12;
        ansh = (t[1].hours - t[0].hours);
        if (t[0].minutes > t[1].minutes)
        {
            ansm = (t[0].minutes - t[1].minutes);
        }
        else
        {
            ansh = ansh - 1;
            ansm = (t[0].minutes + 60) - t[1].minutes;
        }
    }
    else
    {
        ansh = (t[1].hours - t[0].hours);
        if (t[0].minutes == t[1].minutes)
        {
            ansm = 0;
        }
        else
        {
            if (t[1].minutes > t[0].minutes)
            {
                ansm = (t[1].minutes - t[0].minutes);
            }
            else
            {
                ansh = ansh - 1;
                ansm = (t[1].minutes + 60) - t[0].minutes;
            }
        }
    }
    if (ansm == 60)
    {
        ansh += 1;
        ansm = 0;
    }

    printf("%d:%d Hours Difference", ansh, ansm);
}
int take(struct time t[]);
int main()
{
    struct time t[2];
    take(t);
    printf("%d:%d\n%d:%d\n\n", t[0], t[1]);
    checkTime(t);
}
int take(struct time t[])
{
    for (int i = 0; i < 2; i++)
    {

        printf("Enter %d Time Period: \n", i + 1);
        printf("Time: ");
        scanf("%d:%d", &t[i].hours, &t[i].minutes);
        printf("\n");
    }
}
// Work In Progress