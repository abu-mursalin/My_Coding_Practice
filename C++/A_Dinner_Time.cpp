#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m,p,q;
    cin>>n>>m>>p>>q;

    if(n%p==0){
        if(n/p*q == m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    else cout<<"YES"<<endl;
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