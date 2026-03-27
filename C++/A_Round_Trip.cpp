#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll r,x,d,n;
    cin>>r>>x>>d>>n;

    string s;
    cin>>s;

    ll ans = 0;

    for(ll i=0 ; i<n ; i++){
        if(s[i] == '1'){
            ans++;
            if(r == 0)continue;
            else if(r<=x)r--;
            else if(r-d >= x)r-=d;
            else r = (x-1);
        }
        else if(r<x){
            ans++;
            if(r == 0)continue;
            else if(r<=x)r--;
            else if(r-d >= x)r-=d;
            else r = (x-1);
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