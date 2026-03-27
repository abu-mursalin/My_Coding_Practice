#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    ll sum = 0,ans = 0;

    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    map<ll,ll>m;
    
    for(int i=0;i<n;i++){
        if(v[i]==0){
            ans++;
            sum = 0;
            m.clear();
        }

        else{
            if(m[sum + v[i]] || (sum + v[i] == 0)){
                ans++;
                sum = 0;
                m.clear();
                continue;
            }
            
            sum += v[i];
            m[sum]=1;
        }
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