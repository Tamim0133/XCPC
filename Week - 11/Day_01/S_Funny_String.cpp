#include <stdio.h>
int abs(int x)
{
    if (x < 0)
        return -1 * x;
    return x;
}
int main()
{
    char arr[10006];
    int n;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", arr);
        int len = 0;

        while (arr[len] != '\0')
            len++;

        int a[len - 1], b[len - 1];
        int funny = 1;

        for (int i = 0; i < len - 1; i++)
        {
            a[i] = abs(arr[i + 1] - arr[i]);
        }
        for (int i = len - 1, j = 0; i > 0; i--, j++)
        {
            b[j] = abs(arr[i] - arr[i - 1]);
        }
        for (int i = 0; i < len - 1; i++)
        {
            // printf("%d %d\n", a[i], b[i]);
            if (a[i] != b[i])
                funny = 0;
        }

        if (funny)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }
}