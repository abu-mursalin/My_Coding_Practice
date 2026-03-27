#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    ll ans = 0 ;

    for(int i=1;i<n;i+=2){
        if(v[i+1]<v[i]){
            ll temp = v[i]-v[i+1];
            ans += temp;
            v[i] -= temp;
        }
    }

    for(int i=2;i<n;i+=2){
        if(v[i+1]>v[i]){
            ll temp = v[i+1]-v[i];
            ans += temp;
            v[i+1] -= temp;
        }
    }

    for(int i=1;i<n-1;i+=2){
        ll temp = v[i]+v[i+2]-v[i+1];

        if(temp>0){
            v[i+2] -= temp;
            ans += temp;
        }
    }

    cout<<ans<<endl;
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