// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long a, b;
//     cin >> a >> b;

//     bool a_odd = false;
//     if (a & 1)
//         a_odd = true;

//     bool b_odd = false;
//     if (b & 1)
//         b_odd = true;

//     if (a == b)
//         cout << a << endl;

//     else if (a_odd and b_odd)
//         cout << (a ^ 1) << endl;

//     else if (!a_odd and !b_odd)
//         cout << (b ^ 1) << endl;

//     else if (a_odd and !b_odd)
//     {
//         cout << (a ^ b) << endl;
//     }
//     else if (!a_odd and b_odd)
//     {
//         cout << 1 << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long a, b;
//     cin >> a >> b;

//     long long result = 0;
//     for (int i = a; i <= b; i++)
//     {
//         result ^= i;
//     }

//     cout << result << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// long long solve(long long A, long long B)
// {
//     // Compute XOR of A to B
//     long long result = 0;

//     for (long long i = A; i <= B; i++)
//     {
//         // XOR each number from A to B
//         result ^= i;
//     }

//     return result;
// }

// int main()
// {
//     long long A, B;
//     cin >> A >> B;

//     long long result = solve(A, B);

//     cout << result << endl;

//     return 0;
// }

// এইটা Geeks for geeks আর Chatgpt ঘাইটা পাইছি ।।
#include <iostream>

using namespace std;

long long solve(long long n)
{
    long long rem = n % 4;

    if (rem == 0)
    {
        return n;
    }
    else if (rem == 1)
    {
        return 1;
    }
    else if (rem == 2)
    {
        return n + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    long long A, B;
    cin >> A >> B;

    cout << (solve(A - 1) ^ solve(B)) << endl;

    return 0;
}
