#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    int n;
    cin>>n;

    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());

    ll ans=0;
 
    for(int i=0;i<n;i++)ans+=abs(i+1-v[i]);

    cout<<ans;
    return 0;
}