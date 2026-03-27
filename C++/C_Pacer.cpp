#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,m;
    cin>>n>>m;

    ll ans = 0,cp = 0,ct = 0;
    ll a,b;

    while(n--){
        cin>>a>>b;

        if(b==cp){
            if((a-ct)&1)ans += (a-ct-1);
            else ans += (a-ct);
        }
        else {
            if((a-ct)&1)ans += (a-ct);
            else ans += (a-ct-1);
        }

        cp=b;
        ct=a;
    }

    ans += (m-a);
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