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

    // int tc; cin>>tc;

    // while(tc--){

    // }
    vector <int> v(3);
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int a = v[2] - v[1];
    int b = v[1] - v[0];
    cout<<a+b<<'\n';
    return 0;
}