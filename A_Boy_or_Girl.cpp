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

    // int tc; cin>>tc;

    // while(tc--){
           
    // }
    string s; cin>>s;

    set<char> distinct;

    for( char ch : s)
    {
        distinct.insert(ch);
    }
    int n = distinct.size();
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}
//ezpzlemonsqueezy