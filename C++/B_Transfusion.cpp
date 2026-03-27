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

    if(total % n != 0){
        cout<<"NO"<<endl;
        return;
    }

    ll target = total/n;

    for(int i=1;i<n-1;i++){
        if(v[i-1]>target){
            ll temp=v[i-1]-target;
            v[i-1]=target;
            v[i+1]+=temp;
        }
        else if(v[i-1]<target){
            ll temp=target-v[i-1];
            v[i-1]=target;
            v[i+1]-=temp;
        }
    }

    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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