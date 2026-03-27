#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    int first = v[0],cnt=0,need = ceil(n/2.0)-1;
    
    for(int i=0;i<n;i++)if(v[i]<first)cnt++;

    if(cnt == need){
        cout<<"YES"<<endl;
        return;
    }

    else if(cnt<need){
        int cn = 0;
        for(int i=0;i<n;i++)if(v[i]>abs(first))cn ++;

        if(cn >= (need-cnt)){
            cout<<"YES"<<endl;
            return;
        }
    }

    else {
        int cn = 0;
        for(int i=0;i<n;i++)if(v[i]<(abs(first)*-1))cn ++;

        if(cn >= (cnt-need)){
            cout<<"YES"<<endl;
            return;
        }
    }

    first*=(-1),cnt=0,need = ceil(n/2.0)-1;

    for(int i=0;i<n;i++)if(v[i]<first)cnt++;

    if(cnt == need){
        cout<<"YES"<<endl;
        return;
    }

    else if(cnt<need){
        int cn = 0;
        for(int i=0;i<n;i++)if(v[i]>abs(first))cn ++;

        if(cn >= (need-cnt)){
            cout<<"YES"<<endl;
            return;
        }
    }

    else {
        int cn = 0;
        for(int i=0;i<n;i++)if(v[i]<(abs(first)*-1))cn ++;

        if(cn >= (cnt-need)){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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