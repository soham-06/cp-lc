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
    int n; cin>>n;
    vi arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxl = 1;
    int currl = 1;

    for(int i = 1; i<n; i++)
    {
        if(arr[i]>=arr[i-1]) currl ++;
        else maxl = max(maxl, currl), currl = 1;
    }
    maxl = max(maxl, currl);
    cout<<maxl<<'\n';
}

signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; //cin>>tc;
    tc = 1;

    while(tc--){
        solve();
    }
    return 0;
}
//EZZZZZZZZZZZZZZZZ