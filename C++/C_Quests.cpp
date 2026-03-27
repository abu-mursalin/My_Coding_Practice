#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll>a(n),b(n);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    for(int i=1;i<n;i++){
        b[i] = max(b[i],b[i-1]);
    }

    ll sum = 0, ans = 0;

    for(int i=0;i<k && i<n;i++){
        sum += a[i];
    }

    if(k-n>0)sum += (b[n-1]*(k-n));
    ans = sum;
    ll cnt = max(0LL,k-n);

    for(int i=min(n,k)-1;i>0;i--){
        sum -= a[i];
        sum -= (cnt*b[i]);
        cnt++;
        sum += (cnt*b[i-1]);
        ans = max(ans,sum);
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