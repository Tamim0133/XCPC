#include <stdio.h>
int main()
{
    char arr[1000005];
    int cas = 1;
    while (scanf("%s", arr) != EOF)
    {
        int t;
        scanf("%d", &t);
        printf("Case %d:\n", cas);

        for (int j = 1; j <= t; j++)
        {
            int count = 1;
            int a, b;
            scanf("%d %d", &a, &b);
            if (b < a)
            {
                int temp = a;
                a = b;
                b = temp;
            }
            int key = arr[a];
            for (int i = a + 1; i <= b; i++)
            {
                if (arr[i] != key)
                {
                    count = 0;
                    break;
                }
            }
            if (count)
                printf("Yes\n");
            else
                printf("No\n");
        }
        cas++;
    }
    return 0;
}