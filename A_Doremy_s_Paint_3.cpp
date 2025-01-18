#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;

signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int a; cin>>a;
        int n;
        vector<int> v(a);
        for(int i = 0; i<=a; i++)
        {
            cin>>n;
            v.push_back(n);
        }
        if(a==2)
        {
            cout<<"Yes"<<'\n';
        }
        
    }
    return 0;
}