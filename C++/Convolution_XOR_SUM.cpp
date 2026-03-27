#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
#define MOD 1000000007L

ll power(ll a, ll b){
    if(b==0)return 1;

    ll temp = (power(a,b/2)) % MOD;

    if(b%2)return (temp*temp*a) % MOD;
    else return (temp*temp) % MOD;
}

ll factorial(ll a){
    ll fac = 1;

    for(ll i=2;i<=a;i++){
        fac*=i;
        fac %= MOD;
    }

    return fac;
}
 
int main(){
    ll n;
    cin>>n;

    vector<ll>a(n),b(n);

    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];

    vector<ll>c(32);
    for(ll i=0;i<32;i++){
        for(ll j=0;j<n;j++){
            if(a[j] & (1<<i))c[i]++;
        }
    }

    ll ans = 0;

    for(ll j=0;j<n;j++){

        ll temp = 0;
        vector<ll>d;

        for(ll i=0;i<32;i++){
            if(b[j] & (1<<i)){
                temp += (n-c[i]);
            }
            else {
                temp += c[i];
            }

            d.push_back(temp % 2);
            temp = (temp>>1);
            temp = temp % MOD;
        }

        while(temp){
            d.push_back(temp % 2);
            temp = (temp>>1);
        }

        ll len = d.size();

        for(ll i=0;i<len;i++){
            if(d[i]) ans += power(2,i);
            ans = ans % MOD;
        }
    }

    ans = ans * factorial(n-1);
    ans %= MOD ;

    cout<<ans;
}