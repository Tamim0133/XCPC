
#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <complex>
#include <cmath>
#include <chrono>
#include <ctime>
#include <cassert>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <string>
#include <random>

using namespace std;

int main()
{
    int n, q;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int idx1 = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int idx2 = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

        if (idx1 == 0)
            cout << "X ";
        else
            cout << arr[idx1 - 1] << " ";

        if (idx2 == n)
            cout << "X" << endl;
        else
            cout << arr[idx2] << endl;
    }
}