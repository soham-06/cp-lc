#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll b;
    cin >> b;

    for (int i = 0; i < n; i++) {
        a[i] = min(a[i], b - a[i]);
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
//EZZZZZZZZZZZZZZZZ