#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
#define MAX 10000000

ll prime[MAX+1];

void prime_generator(){
    for(ll i=2;i*i<=MAX;i++){
        if(prime[i]){
            for(ll j=i*i;j<=MAX;j+=i)prime[j]=0;
        }
    }

    for(ll i=1;i<=MAX;i++){
        prime[i]+=prime[i-1];
    }
}
 
void solve(){
    ll n;
    cin>>n;

    ll ans = 0;

    for(ll i=1;i<n;i++){
        ans += prime[n/i];
    }

    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    fill(prime,prime+MAX+1,1);
    prime[0]=0;
    prime[1]=0;
    prime_generator();
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}