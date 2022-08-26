#include <stdio.h>
#include <string.h>
int main()
{
    int arr[] = {2, 2, 1, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (j >= n)
            break;
        else
            arr[j] += (arr[j + arr[j]]) - 1;
        j += arr[j];
        count++;
    }
    printf("%d", count);
    return 0;
}
// Alla Mhota Hard Question