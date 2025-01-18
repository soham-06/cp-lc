#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;
#define endl  '\n'
#define vi    vector<int>
#define pb    push_back

void solve()
{
    int n;
    cin >> n;
    
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    
    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    
    while (q--) {
        int mi;
        cin >> mi;

        
        int affordableShops = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();

        cout << affordableShops << endl;
    }
}

signed main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc = 1;
    while(tc--) {
        solve();
    }
    return 0;
}
