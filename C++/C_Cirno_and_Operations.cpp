#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,total=0;
    cin>>n;

    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }

    if(n==1){
        cout<<v[0]<<endl;
        return;
    }

    while(v.size()>1){
        ll sum = 0;
        for(int i=0;i<v.size()-1;i++){
            v[i]=v[i+1]-v[i];
            sum += v[i];
        }
        if(abs(sum)>total)total=abs(sum);
        v.pop_back();
    }

    ll ans = max(total,abs(v[0]));
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