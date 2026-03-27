#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int cnt1=0, cnt0=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1')cnt1++;
        else cnt0++;
    }

    cnt1/=2;
    cnt0/=2;

    int ans = cnt1+cnt0-k;

    if(ans<0)cout<<"NO"<<endl;
    else if(ans % 2 == 0 && cnt1>=(ans/2) && cnt0>=(ans/2))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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