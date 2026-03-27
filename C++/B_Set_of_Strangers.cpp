#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    vector<int>v(n*m+1);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            v[arr[i][j]]=1;
        }
    }
    
    int ans = 0;

    for(int i=1;i<=n*m;i++){
        if(v[i]==1)ans++;
        v[i]=0;
    }
    map<int,int>maa;

    int recheck = ans;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[arr[i][j]]==1)continue;

            if(i>0 && arr[i][j]==arr[i-1][j]){
                ans++;
                v[arr[i][j]]=1;
                continue;
            }

            if(i<n-1 && arr[i][j]==arr[i+1][j]){
                ans++;
                v[arr[i][j]]=1;
                continue;
            }

            if(j>0 && arr[i][j]==arr[i][j-1]){
                ans++;
                v[arr[i][j]]=1;
                continue;
            }

            if(j<m-1 && arr[i][j]==arr[i][j+1]){
                ans++;
                v[arr[i][j]]=1;
                continue;
            }
        }
    }

    if(ans == recheck)cout<<ans-1<<endl;
    else cout<<ans-2<<endl;
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