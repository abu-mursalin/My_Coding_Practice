#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n;
    m=n;

    vector<int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(v[j]==m){
                for(int k=j;k<n;k++){
                    if(v[k]==m){
                        v[k]--;
                        cnt++;
                    }
                    else break;
                }
                break;
            }
        }
        if(cnt!=i){
            cout<<"NO"<<endl;
            return;
        }
        m--;
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