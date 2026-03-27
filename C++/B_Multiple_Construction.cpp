#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n;
    m=n;

    vector<int>v(2*m+1);

    if(n == 1 )cout<<"1 1"<<endl;
    else if(n == 2 )cout<<"2 1 2 1"<<endl;
    else if(n == 3 )cout<<"3 1 2 3 2 1"<<endl;
    else {
        v[1]=n, v[n+1]=n, n--;
        v[3]=n, v[n+3]=n, n--;
        v[2]=n, v[n+2]=n, n--;
        v[2*m-1]=1, v[2*m]=1;

        for(int i=4;n>1;i++){
            v[i]=n, v[i+2*n]=n, n--;
        }

        for(int i=1;i<=2*m;i++)cout<<v[i]<<" ";
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