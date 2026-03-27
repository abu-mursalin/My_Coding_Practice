#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll a,b;
    cin>>a>>b;

    if(a%2LL==1LL && b%2LL==1LL){
        ll ans=1LL+a*b;
        cout<<ans<<endl;
    }

    else if(a%2LL==0LL && b%2LL==1LL)cout<<-1<<endl;

    else if(a%2LL==0LL && b%2LL==0LL){
        ll ans = 2LL+((b/2LL)*a);
        cout<<ans<<endl;
    }

    else{
        if((b/2LL)%2LL==1LL)cout<<-1<<endl;
        else {
            ll ans = 2LL+((b/2LL)*a);
            cout<<ans<<endl;
        }
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