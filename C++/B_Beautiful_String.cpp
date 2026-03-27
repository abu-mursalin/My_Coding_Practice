#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt = 0;
    for(int i=0;i<n;i++)if(s[i]=='1')cnt++;

    cout<<cnt<<endl;
    for(int i=0;i<n;i++)if(s[i]=='1')cout<<i+1<<" ";
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