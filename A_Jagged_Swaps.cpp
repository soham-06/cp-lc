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
        int arr[n];
        for (int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0] != 1)
        {
            cout<<"NO"<<'\n';
        }
        else cout<<"YES"<<'\n';
    }
    return 0;
}