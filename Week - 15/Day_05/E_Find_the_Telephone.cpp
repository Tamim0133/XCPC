#include <stdio.h>
int length(char arr[])
{
    int l = 0;
    while (arr[l] != '\0')
    {
        l++;
    }
    return l;
}
int find(char c)
{
    if (c == 'A' || c == 'B' || c == 'C')
    {
        return 2;
    }
    if (c == 'D' || c == 'E' || c == 'F')
    {
        return 3;
    }
    if (c == 'G' || c == 'H' || c == 'I')
    {
        return 4;
    }
    if (c == 'J' || c == 'K' || c == 'L')
    {
        return 5;
    }
    if (c == 'M' || c == 'N' || c == 'O')
    {
        return 6;
    }
    if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
    {
        return 7;
    }
    if (c == 'T' || c == 'U' || c == 'V')
    {
        return 8;
    }
    if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
    {
        return 9;
    }
    return c - '0';
}
int main()
{
    char arr[100];

    while (scanf("%s", arr) != EOF)
    {
        int l = length(arr);
        for (int i = 0; i < l; i++)
        {
            if (arr[i] == '-')
                printf("-");
            else
                printf("%d", find(arr[i]));
        }
        printf("\n");
    }
}