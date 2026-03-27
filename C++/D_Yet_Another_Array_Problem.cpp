#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    vector<ll>v(n);
    bool even = false, odd = false;

    for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i] & 1)odd = true;
        else even = true;
    }

    if(odd)cout<<2<<endl;
    else{
        for(ll i=3;i<60;i+=2){
            for(ll j=0;j<n;j++){
                if(__gcd(v[j],i) == 1){
                    cout<<i<<endl;
                    return;
                }
            }
        }

        cout<<-1<<endl;
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