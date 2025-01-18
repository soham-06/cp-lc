#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;
#define endl  '\n'
#define vi    vector<int>
#define pb    push_back

const int N = 1e6;
const int MOD = 1e9 + 7;
vector<int> primes;

void sieve() {
    vector<bool> isPrime(N+1, true);
    for(int i = 2; i<=N; i++) {
        if(isPrime[i]) primes.emplace_back(i);
        for(int j = i*i; j<=N; j+=1) isPrime[j] = false;
    }
}

void solve()
{
    int n,fcount=0, gcount=0; cin>>n;
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
            {
                fcount++;
            }
            else {
                gcount++;
            }
        }
    }

    if(fcount>gcount) cout<<1<<'\n';
    else if(fcount<gcount) cout<<-1<<'\n';
    else cout<<0<<'\n';
}

signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        solve();
    }
    return 0;
}
//EZZZZZZZZZZZZZZZZ