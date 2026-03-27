#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    bool flag1 = false;
    int cnt = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            while(i<n){
                if(s[i]=='1')cnt++;
                else break;
                i++;
            }

            if(cnt>=k){
                flag1 = true;
                break;
            }
            cnt = 0;
        }
    }

    if(flag1)cout<<"NO"<<endl;

    else {
        cout<<"YES"<<endl;
        int trace = 1;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                v[i]=trace;
                trace++;
            }
        }

        trace = n;
        for(int i=n-1;i>=0;i--){
            if(v[i]==0)v[i]=trace--;
        }

        for(auto u : v)cout<<u<<" ";
        cout<<endl;
    }
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