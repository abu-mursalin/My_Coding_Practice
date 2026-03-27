#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>v(n);
    map<int,int>ma;
    bool flag = false;

    for(int i=0;i<n;i++){
        int l,k;
        cin>>l;
        if(l == m)flag = true;

        for(int j=0;j<l;j++){
            cin>>k;
            v[i].push_back(k);
            ma[k]++;
        }
    }

    if(n == 2){
        if(v[0].size()==m && v[1].size()==m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(flag)cout<<"YES"<<endl;
    else if(ma.size() != m)cout<<"NO"<<endl;
    else{
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(auto u : v[i]){
                ma[u]--;
                if(ma[u] == 0)ma.erase(u);
            }
            if(ma.size() == m)cnt++;
            if(cnt == 2)break;
            for(auto u : v[i]){
                ma[u]++;
            }
        }

        if(cnt == 2)cout<<"YES"<<endl;
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