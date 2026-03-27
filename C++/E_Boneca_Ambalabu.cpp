#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    vector<ll>v(n),v1(32);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    for(ll i = 0;i<32;i++){
        for(int j=0;j<n;j++){
            v1[i] += ((v[j] >> i) & 1);
        }
    }

    ll ans = 0;

    for(ll i=0;i<n;i++){
        ll temp_ans = 0;
        ll temp = 0;

        for(ll j=0;j<32;j++){
            if((v[i] & (1LL<<j)) == 0){
                temp += v1[j];
                if(temp & 1)(temp_ans |= (1LL<<j));
                temp >>= 1;
            }

            else {
                temp += (n-v1[j]);
                if(temp & 1)(temp_ans |= (1LL<<j));
                temp >>= 1;
            }
        }

        ll k = 32;
        while(temp){
            if(temp & 1)(temp_ans |= (1LL<<k));
            temp >>= 1;
            k++;
        }

        if(temp_ans > ans)ans = temp_ans;
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