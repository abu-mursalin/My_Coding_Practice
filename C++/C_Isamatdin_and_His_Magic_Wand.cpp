#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<int>v(n);
    bool even = false, odd = false;

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i] & 1)odd = true;
        else even = true;
    }

    if(even && odd){
        sort(v.begin(),v.end());
    }

    for(auto u : v)cout<<u<<" ";
    cout<<endl;
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