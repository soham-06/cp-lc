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
    int x=0;
    string stat;

    while(tc--){
        cin>>stat;
        if(stat == "++X"|| stat == "X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<'\n';
    return 0;
}