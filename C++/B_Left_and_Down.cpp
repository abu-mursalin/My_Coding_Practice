#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll a,b,k;
    cin>>a>>b>>k;

    if(a<=k && b<=k)cout<<1<<endl;
    else if(max(a/__gcd(a,b),b/__gcd(a,b))<=k)cout<<1<<endl;
    else cout<<2<<endl;
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