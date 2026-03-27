#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    vector<ll>even,odd;

    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;

        if(a & 1)odd.push_back(a);
        else even.push_back(a);
    }

    ll ans = 0;

    if(odd.size() == 0)cout<<ans<<endl;
    else{
        for(ll i=0;i<even.size();i++)ans += even[i];

        sort(odd.rbegin(),odd.rend());

        for(ll i=0;i<ceil(odd.size()/2.0);i++)ans += odd[i];

        cout<<ans<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}