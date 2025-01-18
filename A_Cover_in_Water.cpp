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
        int n; cin>>n;
        string s; cin>>s;
        bool flag = false;
        for(int i=0; i+2<n; i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                flag = true;
                break;
            }
        }
            if(flag == true)
            {
                cout<<2<<'\n';
            }
            else{
                int count = 0;
                for(int i=0; i<n; i++)
                {
                    if(s[i]=='.') count ++;
                }
                cout<<count<<'\n';
            }
    }
    return 0;
}