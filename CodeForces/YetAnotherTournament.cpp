#include <algorithm>
#include <array>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <stack>
#include <numeric>
using namespace std;
#define endl '\n'
#define sp ' '
#define nl '\n'
#define fastIO cin.tie(NULL) -> sync_with_stdio(false)
using ll = long long;
using ull = unsigned long long;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpi = vector<pi>;
using vpl = vector<pll>;
#define pb push_back
#define all(x) begin(x), end(x)
#define max(n, m) ((n > m) ? n : m)
#define min(n, m) ((n < m) ? n : m)
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl

#ifdef DBG
#include "dbg.h"
#else 
#define dbg(...) 1000101
#define dbgm(...) 110100100
#endif

// check for overflow (long long vs int / make everything long long)
// index out of bounds can cause program to work locally but won't on grading server
//
// Solution Ideas:
//  - Linear search
//  - Binary search
//  - Unordered_... data structures

void solve () {
    int n, m; cin >> n >> m;
    vi A(n), B(n);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        A[i] = a; B[i] = a;
    }
    sort(all(B));

    int cur = 0, ans = 0;
    for (int i = 0; i < n && B[i] <= m; i++) {
        m -= B[i];
        ans++;
    }

    if (ans > 0 && ans != n && m + B[ans - 1] >= A[ans]) ans++;
    cout << n + 1 - ans << nl;
}

int main () {
    fastIO;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
