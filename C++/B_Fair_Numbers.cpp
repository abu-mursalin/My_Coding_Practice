#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    ll ans = 2520 - (n % 2520) + n;

    while(n<ans){
        ll m = n;
        bool flag = true;

        while(m && flag){
            if(m%10 == 0)m/=10;
            else if(n % (m%10))flag = false;
            else m/=10;
        }

        if(flag)break;
        n++;
    }

    cout<<min(ans,n)<<endl;
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