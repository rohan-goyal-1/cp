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

int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);

    int t; cin >> t;
    while (t--) {
        string in; cin >> in;
        cout << (in.back() == '0' ? 'E' : 'B') << '\n';
    }

    return 0;
}

