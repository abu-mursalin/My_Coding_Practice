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
    ll n,k,cnt=0;
    cin>>n>>k;

    vector<ll>v,v1;

    while(n){
        v.push_back(n%3);
        if(n%3)cnt+=(n%3);
        n/=3;
    }

    v1=v;

    if(cnt>k){
        cout<<-1<<endl;
        return;
    }

    int len = v.size(),index = len-1;

    for(int i=0;i<len;i++){
        v1[i]=power(3,i);
    }

    while(k-cnt>0 && index){
        ll temp = (k-cnt)/2;
        if(temp>v[index])temp = v[index];
        v[index] -= temp;
        v[index-1] += temp*3;
        cnt += temp*2;
        index--;
    }
    
    ll total = 0, i = 0 ;

    while(i<len){
        ll temp = power(3,i+1)+i*power(3,i-1);
        total+=(v[i]*temp);
        i++;
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