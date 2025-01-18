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
        int legc; cin>>legc;
        int a = legc/4;
        if(legc%4==0)
        {
            cout<<a<<'\n';
        }
        else{
            cout<<a+1<<'\n';
        }


    }
    return 0;
}