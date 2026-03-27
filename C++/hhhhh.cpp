#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;

    int len = s.lenth();

    if(len & 1)cout<<0<<endl;

    else{
        for(int i=0,j=len/2;i<len/2;i++,j++){
            if(s[i]!=s[j]){
                cout<<0<<endl;
                return;
            }
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