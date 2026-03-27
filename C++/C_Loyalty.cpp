#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll>v(n),v1;

    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());

    ll bonus_point = 0, total_parchased = 0;

    for(int i=0,j=n-1;i<=j;j--){
        ll temp = total_parchased - ((total_parchased/x)*x);
        temp += v[j];
        total_parchased += v[j];

        while(temp < x){
            if(i >= j)break;
            v1.push_back(v[i]);
            temp += v[i];
            total_parchased += v[i];
            i++;
        }

        v1.push_back(v[j]);
        if(temp >= x) bonus_point += v[j];
    }

    cout<<bonus_point<<endl;
    for(auto u : v1)cout<<u<<" ";
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