#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,x=0,i=1;
    cin>>n;

    while(abs(x)<=n){
        if(i & 1)x -= (2*i-1);
        else x += (2*i-1);

        i++;
    }

    if(i & 1)cout<<"Kosuke"<<endl;
    else cout<<"Sakurako"<<endl;
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