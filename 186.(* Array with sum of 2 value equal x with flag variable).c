// Array with sum of 2 value equal x with flag variable
#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    int flag = 0;
    scanf("%d", &x);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                flag = 1;
                printf("Yes\n");
            printf("%d %d\n", a[i], a[j]);
            }
        }
    }
    if (flag == 0)
    {
        printf("No\n");
    }

    return 0;
}
