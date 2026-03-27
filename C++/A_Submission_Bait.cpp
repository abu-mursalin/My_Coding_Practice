#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    map<int,int>m;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }

    for(auto u : m){
        if(u.second & 1){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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