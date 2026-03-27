#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0,j=n-1;i+1<j-1;i++,j--){
        if(v[i] != v[j]){
            if(v[i] == v[i+1])swap(v[i+1],v[j-1]);
            if(v[j] == v[j-1])swap(v[i+1],v[j-1]);
        }
    }

    int ans = 0;

    for(int i=0;i<n-1;i++){
        if(v[i] == v[i+1])ans++;
    }

    cout<<ans<<endl;
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