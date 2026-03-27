#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    int ans = 0, high = v[0];

    for(int i=1;i<n;i+=2){
        high = max(high,v[i]);
        high = max(high,v[i-1]);
        v[i] = high;
    }

    for(int i=1;i<n;i+=2){
        if(v[i-1]>=v[i]){
            ans++;
            v[i-1]--;
        }

        if(i+1<n && v[i+1]>=v[i]){
            ans += (v[i+1]-v[i]+1);
            v[i+1] -= (v[i+1]-v[i]+1);
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