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
        int n;
        cin>>n;
        if(n%3==0)
        {
            cout<<"Second"<<'\n';
        }
        else{
            cout<<"First"<<'\n';
        }
    }
    return 0;
}