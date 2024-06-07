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

#ifdef DBG
#include "dbg.h"
#else 
#define dbg(...) 1000101
#define dbgm(...) 110100100
#endif

inline void setIO (string input = "") {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (input.size()) {
        freopen((input + ".in").c_str(), "r", stdin);
        freopen((input + ".out").c_str(), "w", stdout);
    }
}

int n, m, k;
vi weights, towers;
ll ans = 0, cur_tower = 0;

int main () {
    fastIO;

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        for (int i = 0; i < b; i++) weights.pb(a);
    }
    sort(all(weights), greater<int>());
    dbg(weights);

    towers.resize(m);
    for (int& w : weights) {
        dbg(towers);
        if (cur_tower == m) {
            if (towers[0] - w < k) continue;
            else {
                cur_tower = 1; ans++;
                towers[0] = w;
            }
        }
        else {
            if (towers[cur_tower] - w < k && towers[cur_tower] != 0) continue;
            towers[cur_tower] = w;
            ans++, cur_tower++;
        }
    }
    cout << ans << nl;

    return 0;
}
