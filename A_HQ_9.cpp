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
    string  p; cin>>p;
    for(auto c : p){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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