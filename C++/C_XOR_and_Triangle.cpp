#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll x;
    cin>>x;

    ll temp = log2(x);
    ll y = (1 << temp)-1;
    ll z = x^y;

    if(x+y>z && y+z>x && x+z>y)cout<<y<<endl;
    else cout<<-1<<endl;
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