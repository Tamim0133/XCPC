#include <stdio.h>
int is_upper(char c)
{
    if (c <= 90 && c >= 65)
        return 1;
    return 0;
}
int is_lower(char c)
{
    if (c >= 97 && c <= 122)
        return 1;
    return 0;
}
int is_digit(char c)
{
    if (c - '0' >= 0 && c - '0' <= 9)
        return 1;
    return 0;
}
int special_char(char c)
{
    // [!@#$%^&*()-+ ]
    if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '+')
        return 1;
    return 0;
}
int main()
{
    int lower_case_nai = 1; // true
    int upper_case_nai = 1; // true
    int digit_nai = 1;      // true
    int special_nai = 1;    // true

    int n;
    scanf("%d", &n);

    char arr[n];
    scanf("%s", arr);

    for (int i = 0; i < n; i++)
    {
        if (is_digit(arr[i]))
            digit_nai = 0;
        else if (is_lower(arr[i]))
            lower_case_nai = 0;
        else if (is_upper(arr[i]))
            upper_case_nai = 0;
        else if (special_char(arr[i]))
            special_nai = 0;
    }
    // printf("%d %d %d %d\n", lower_case_nai, digit_nai, upper_case_nai, special_nai);
    int k = n + lower_case_nai + upper_case_nai + digit_nai + special_nai;
    if (k >= 6)
        printf("%d\n", lower_case_nai + upper_case_nai + digit_nai + special_nai);
    else
        printf("%d\n", 6 - n);
}