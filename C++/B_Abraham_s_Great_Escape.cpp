#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n>>k;

    int temp = n*n-k;

    if(temp == 1)cout<<"NO"<<endl;
    else{
        char arr[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)arr[i][j]='D';
        }

        if(temp){
            arr[0][0]='D';
            arr[1][0]='U';

            temp-=2;

            for(int i=1;i<n && temp;i++){
                arr[0][i]='L';
                temp--;
            }

            for(int i=1;i<n && temp;i++){
                arr[1][i]='L';
                temp--;
            }

            for(int i=0;i<n && temp;i++){
                for(int j=2;j<n && temp;j++){
                    arr[j][i]='U';
                    temp--;
                }
            }
        }

        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cout<<arr[i][j];
            cout<<endl;
        }
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