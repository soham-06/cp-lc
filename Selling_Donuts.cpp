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
    int n,m; cin>>n>>m;

    vector<int> A(n);
    for(int i=1; i<n;i++)
    {
        cin>>A[i];
    }
    vector<int> B(m);
    for(int i=0; i<m;i++)
    {
        cin>>B[i];
    }

    int sadcnt=0;
    for(int i=0; i<m; i++)
    {
        int t = B[i]-1;
        if(A[t]>0)
        {
            A[t]--;
        }
        else{
            sadcnt++;
        }
    }
    cout<<sadcnt<<'\n';
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