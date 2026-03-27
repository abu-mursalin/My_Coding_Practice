#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n>>m;

    int arr[n][m],idx=0;

    for(int i=1;i<=n/2;i++){
        if(i%2){
            arr[idx++][0]=1;
            arr[idx++][0]=0;
        }
        else{
            arr[idx++][0]=0;
            arr[idx++][0]=1;
        }
    }

    for(int i=0;i<n;i++){
        int idx = 0;
        if(arr[i][0]==1){
            for(int j=1;j<=m/2;j++){
                if(j%2){
                    arr[i][idx++]=1;
                    arr[i][idx++]=0;
                }
                else{
                    arr[i][idx++]=0;
                    arr[i][idx++]=1;
                }
            }
        }

        else{
            for(int j=1;j<=m/2;j++){
                if(j%2){
                    arr[i][idx++]=0;
                    arr[i][idx++]=1;
                }
                else{
                    arr[i][idx++]=1;
                    arr[i][idx++]=0;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
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