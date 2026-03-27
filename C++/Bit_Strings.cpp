#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
#define mod 1000000007

ll power(ll n){
    if(n<63L)return (1L<<n)%mod;

    ll temp = power(n/2L)%mod;

    if(n%2L)return (temp*temp*2L)%mod;
    else return (temp*temp)%mod;
}
 
int main(){
    ll n;
    cin>>n;

    ll ans = power(n);
    cout<<ans;
}