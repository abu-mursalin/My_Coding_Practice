#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,cnt=0;
    cin>>n;

    vector<ll>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==-1)cnt++;
        if(i!=0 && i!=n-1 && v[i]==-1)v[i]=0;
    }

    if(cnt==n){
        cout<<0<<endl;
        v[0]=-1;
        v[n-1]=-1;
    }

    else if(v[0]==-1 && v[n-1]==-1){
        ll temp = 0;
        for(int i=1;i<n-2;i++)temp += (v[i+1]-v[i]);

        ll temp1 = temp*-1;

        if(temp1==0){
            v[0]=0;v[n-1]=0;
        }
        else if(temp1<0){
            
        }
    }

    else if(v[0]==-1){
        ll temp = 0;
        for(int i=1;i<n-1;i++)temp += (v[i+1]-v[i]);
        ll temp1 =temp*-1;
        temp1 = v[1]-temp1;
        if(temp1>=0 && temp1<=1000000){
            v[0]=temp1;
            temp=0;
        }
        else if(temp1>1000000){
            v[0]=1000000;
            temp += (v[1]-v[0]);
        }
        else {
            v[0]=0;
            temp += (v[1]-v[0]);
        }

        cout<<abs(temp)<<endl;
    }

    else if(v[n-1]==-1){
        ll temp = 0;
        for(int i=0;i<n-2;i++)temp += (v[i+1]-v[i]);
        ll temp1 =temp*-1;
        temp1 = v[n-2]+temp1;
        if(temp1>=0 && temp1<=1000000){
            v[n-1]=temp1;
            temp=0;
        }
        else if(temp1>1000000){
            v[n-1]=1000000;
            temp += (v[n-1]-v[n-2]);
        }
        else {
            v[n-1]=0;
            temp += (v[n-1]-v[n-2]);
        }

        cout<<abs(temp)<<endl;
    }

    else {
        ll temp = 0;
        for(int i=0;i<n-1;i++)temp += (v[i+1]-v[i]);
        cout<<abs(temp)<<endl;
    }

    for(int i=0;i<n;i++)cout<<v[i]<<" ";
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