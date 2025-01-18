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

    int a[6][6],i,j,r,c;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                r=abs(3-i);
                c=abs(3-j);
                cout<<r+c<<'\n';
            }
        }
    }
    return 0;
}