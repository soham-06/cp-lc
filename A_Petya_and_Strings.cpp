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

}

signed main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    // int tc; cin>>tc;

    // while(tc--){
    //     solve();
    // }
    string s1,s2; cin>>s1>>s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if(s1<s2) cout<<-1;
    if(s2<s1) cout<<1;
    if(s1==s2) cout<<0; 
    return 0;
}
//EZZZZZZZZZZZZZZZZ