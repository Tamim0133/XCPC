#include <stdio.h>
int lenght(char c[])
{
    int l = 0;

    while (c[l] != '\0')
        l++;

    return l;
}
int main()
{
    char s[100], t[100];
    scanf("%s %s", s, t);

    int check1[26] = {0}, check2[26] = {0};

    for (int i = 0; i < lenght(s); i++)
    {
        check1[s[i] - 'a']++;
    }

    for (int i = 0; i < lenght(t); i++)
    {
        check2[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (check1[i] != check2[i])
        {
            printf("Not anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}