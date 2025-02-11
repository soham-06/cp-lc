#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;
#define endl  '\n'
#define vi    vector<int>
#define pb    push_back

void solve() {
    string s; cin >> s;
    for(ll i = 1; i<s.size(); i++){
        if((s[i-1]) == s[i])
        {
            cout<<"1"<<'\n';
            return;
        }
    }
    cout<<s.size()<<'\n';
}

signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; 
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
//EZZZZZZZZZZZZZZZZ