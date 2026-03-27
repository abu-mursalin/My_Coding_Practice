#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef double ll;
 
void solve(){
    ll n;
    cin>>n;

    ll ans = 12500;

    if(37500.0*.20<n){
        ans += 37500;
        n -= (37500.0*.20); 
        cout<<ans<<endl;

        if(100000.0*.4<n){
            ans += 100000;
            n -= (100000.0*.4);
            cout<<ans<<endl;

            if(n>0){
                ans += (n*100.0/45.0);
            }
        }
        else ans += (n*100.0/40.0);
    }
    else ans += (n*100.0/20.0);

    cout<<fixed<<setprecision(6)<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    // int t;
    // cin>>t;
 
    // while(t--){
    //     solve();
    // }
    cout<<"helo"<<endl<<endl;
 
    return 0;
}