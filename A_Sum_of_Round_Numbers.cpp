#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;
#define endl  '\n'
#define vi    vector<int>
#define pb    push_back

const int MOD = 1e9 + 7;

signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        int pw =1;
        vi v;
        int n; cin>>n;
        while(n)
        {
            if(n%10)
            {
                v.pb((n%10)*pw);
            }
            n/=10;  pw*=10;
            cout<<v.size()<<'\n';
            for(int i : v)
            {
                cout<< i <<' '<<'\n';
            }
        }
    }
    return 0;
}