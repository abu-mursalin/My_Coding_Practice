#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    float a,b,n;
    cin>>a>>b>>n;

    if(a/n >= b)cout<<1<<endl;
    else if(a == b)cout<<1<<endl;
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