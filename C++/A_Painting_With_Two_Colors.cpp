#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;

    if(b>=a){
        if((n-b)%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    else {
        if((n-a)%2==0 && ((a%2==0 && b%2==0) || (a%2 && b%2)))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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