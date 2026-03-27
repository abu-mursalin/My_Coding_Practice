#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<int>v(n+1),v1(n+1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
        v1[v[i]]++;
    }

    int ans = 0;

    for(int i = 1;i<=n;i++){
        if(v[i]<=v1[v[i]]){
            int cnt = 0;
            int temp = v[i];
            while(cnt<v[i]){
                if(v[i++])
            }
        }
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