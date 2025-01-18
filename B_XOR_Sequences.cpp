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


signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin>>tc;

    while(tc--){
        ll a,b;
        cin>>a>>b;
        for(int bit = 0; bit<=30; bit++)
        {
            if(((a>>bit)&1)!=((b>>bit)&1))
            {
                cout<<(1LL<<bit)<<'\n';
            }
        }
    }
    return 0;
}
//EZZZZZZZZZZZZZZZZ