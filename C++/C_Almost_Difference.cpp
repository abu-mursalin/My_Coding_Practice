#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long double ll;
 
int main(){
    ll n;
    cin>>n;

    vector<ll>v(n),v1(n);
    map<ll,ll>m;

    for(ll i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }

    for(ll i=1;i<n;i++)v1[i]=(-1*v[i-1]);
    for(ll i=2;i<n;i++)v1[i]+=v1[i-1];

    ll ans = 0;

    for(ll i=1;i<n;i++){
        ans += (i*v[i]+v1[i]);
    }

    for(ll i=0;i<n-1;i++){
        ans += m[v[i]-1];
        ans -= m[v[i]+1];
        m[v[i]]--;
    }

    cout<<fixed<<setprecision(0)<<ans<<endl;
}