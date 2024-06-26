#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) begin(x), end(x)
#pragma GCC optimize("O3,unroll-loops")

#ifdef DBG
#include "dbg.h"
#else 
#define dbg(...) 1000101
#define dbgm(...) 110100100
#endif

// check for overflow (long long vs int / make everything long long)
// index out of bounds can cause program to work locally but won't on grading server

// Solution Ideas:
//  - Linear search
//  - Binary search
//  - Unordered_... data structures

// ** RESET GLOBALS **

void solve () {
    // 1 2 2 2 3
    int n; cin >> n;
    set<int> ans;
    int a, b;
    cin >> a >> b;
    if (a == b) {
        ans.insert(a);
    }
    for (int i = 2; i < n; i++) {
        int x; cin >> x;
        if (x == a || x == b) ans.insert(x);
        swap(a, b); swap(b, x);
    }
    if (ans.size() == 0)
        cout << -1;
    else {
        for (auto it = ans.begin(); it != ans.end(); it++) {
            cout << *it;
            if (next(it) != ans.end()) cout << " ";
        }
    }
    cout << '\n';
}

int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);

    int t; cin >> t;
    while (t--) 
        solve();

    return 0;
}
