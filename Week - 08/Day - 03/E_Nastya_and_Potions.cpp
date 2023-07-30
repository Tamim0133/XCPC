// #include <bits/stdc++.h>

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
// #include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
using ll = long long int;

const int N = (int)1e6 + 5;
vector<int> adj[N];
vector<ll> cost;
vector<bool> visited;

ll INF = 1e16 + 5;

void DFS(int curr)
{
    ll res = 0;
    visited[curr] = true;
    bool has_child = false;

    for (auto i : adj[curr])
    {
        has_child = true;
        if (!visited[i])
            DFS(i);
        res += cost[i];
    }
    if (!has_child)
    {
        res = INF;
    }
    cost[curr] = min(cost[curr], res);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    cost.assign(n + 2, false);
    visited.assign(n + 2, false);

    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
    }

    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    for (int i = 1; i <= k; i++)
    {
        int p;
        cin >> p;
        cost[p] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        int req;
        cin >> req;
        for (int j = 1; j <= req; j++)
        {
            int x;
            cin >> x;
            adj[i].push_back(x);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            DFS(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << cost[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}