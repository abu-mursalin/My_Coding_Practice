#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

ll power(ll a,ll b){
    if(b<=0)return 1;

    ll temp = power(a,b/2);

    if(b%2==0)return temp*temp;
    else return temp*temp*a;
}
 
void solve(){
    ll n;
    cin>>n;

    vector<ll>v;

    while(n){
        v.push_back(n%3);
        n/=3;
    }

    ll total = 0; 

    for(int i=0;i<v.size();i++){
        ll temp = power(3,i+1)+i*power(3,i-1);
        total+=(v[i]*temp);
    }

    cout<<total<<endl;
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