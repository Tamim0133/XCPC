#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}
int abs(int n)
{
    if (n < 0)
        return n * -1;
    return n;
}
int main()
{
    int cnt = 1;
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
            break;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bubbleSort(arr, n);

        int query;
        scanf("%d", &query);
        printf("Case %d:\n", cnt);
        while (query--)
        {
            int x;
            scanf("%d", &x);
            int a = 0, b = 0, ans = 100000000;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (abs(arr[i] + arr[j] - x) < ans)
                    {
                        ans = abs(arr[i] + arr[j] - x);
                        a = arr[i] + arr[j];
                        // b = arr[j];
                    }
                }
            }

            printf("Closest sum to %d is %d.\n", x, a);
        }
        cnt++;
    }
}