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
    // sieve();

    while(tc--){
        int n; cin>>n;
        string s; cin>>s;

        int cntA = 0, cntB = 0, cntC = 0, cntD = 0, cntQ = 0;

        for(char c : s)
        {
            if(c=='A') cntA++;
            else if(c=='B') cntB++;
            else if(c=='C') cntC++;
            else if(c=='D') cntD++;
            else if(c=='?') cntQ++;
        }

        int maxA = min(cntA, n);
        int maxB = min(cntB, n);
        int maxC = min(cntC, n);
        int maxD = min(cntD, n);

        int maxscr = maxA + maxB + maxC + maxD;

        cout<<maxscr<<'\n';
    }
    return 0;
}
//EZZZZZZZZZZZZZZZZ