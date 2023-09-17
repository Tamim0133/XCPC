// #include <stdio.h>
// int main()
// {
//     int n, k;
//     scanf("%d", &n);

//     char arr[n];

//     scanf("%s", arr);
//     scanf("%d", &k);
//     k %= 26;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 65 && arr[i] <= 90)
//         {
//             arr[i] += k;
//             if (arr[i] > 90)
//                 arr[i] -= 26;
//         }
//         if (arr[i] >= 97 && arr[i] <= 122)
//         {
//             arr[i] += k;
//             if (arr[i] > 122)
//                 arr[i] -= 26;
//         }
//     }

//     printf("%s", arr);
// }

#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);

    char arr[n];
    scanf("%s", arr);

    scanf("%d", &k);

    k %= 26;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        if (arr[i] >= 65 && arr[i] <= 90)
        {
            x += k;
            if (x > 90)
            {
                x -= 26;
            }
        }
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            x += k;
            if (x > 122)
            {
                x -= 26;
            }
        }
        arr[i] = (char)x;
    }

    printf("%s\n", arr);
}
