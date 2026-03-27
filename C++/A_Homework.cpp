#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m;
    string a,b,c,d;

    cin>>n>>a>>m>>b>>c;

    for(int i=0;i<m;i++){
        if(c[i]=='D'){
            a.push_back(b[i]);
        }
        else d.push_back(b[i]);
    }

    reverse(d.begin(),d.end());
    cout<<d<<a<<endl;
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