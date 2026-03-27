#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    for(int i=1;i<n;i++){
        if(v[i].second >= v[0].second && v[i].first >= v[0].first){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<v[0].first<<endl;
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