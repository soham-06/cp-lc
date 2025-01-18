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
		int n, dest;
		cin>>n>>dest;
		vector<int> v;
		v.push_back(0);
		for(int i=0; i<n;i++){
			int x; cin>>x;
			v.push_back(x);
		}
		int ans = INT_MIN;
		for(int i=0; i+1<v.size();i++)
		{
			ans = max(ans, v[i+1]-v[i]);
		}

		int d = 2*(dest-v.back());
		ans = max(ans, d);

		cout<<ans<<'\n';
    }
    return 0;
}
//EZZZZZZZZZZZZZZZZ