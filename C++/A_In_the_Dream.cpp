#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    c-=a;
    d-=b;

    int e=max(a,b);
    int f=min(a,b);
    int g=max(c,d);
    int h=min(c,d);

    if(e>2*f+2)cout<<"NO"<<endl;
    else if(g>2*h+2)cout<<"NO"<<endl;
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