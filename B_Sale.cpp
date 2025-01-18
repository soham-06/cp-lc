#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);  
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    sort(a.begin(), a.end()); 
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] < 0) {  
            sum += abs(a[i]); 
        } else {
            break;
        }
    }

    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
