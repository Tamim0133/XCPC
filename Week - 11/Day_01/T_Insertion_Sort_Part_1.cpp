#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int key = arr[n - 1];

    if (n == 1)
    {
        printf("%d", key);
        return 0;
    }
    int ok = 0;
    for (int i = n - 2; i >= 0; i--)
    {

        if (arr[i] > key)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = key;
            ok = 1;
        }
        if (i == 0 && !ok)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            arr[i] = key;
            ok = 1;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        if (ok)
            break;
    }
}