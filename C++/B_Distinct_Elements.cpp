#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,cur = 2;
    cin>>n;

    vector<ll>v(n+1),v1(n+1);

    for(ll i=1;i<=n;i++)cin>>v[i];
    v1[1]=1;

    for(ll i=2;i<=n;i++){
        if(i == (v[i]-v[i-1]))v1[i]=cur++;
        else {
            v1[i] = v1[i-v[i]+v[i-1]];
        }
    }

    for(ll i=1;i<=n;i++)cout<<v1[i]<<" ";
    cout<<endl;
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