#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;

    int len=s.size();
    bool flag = false;

    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            flag = true;
            break;
        }
    }

    if(s=="()")cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;

        if(flag){
            for(int i=0;i<len;i++){
                cout<<"()";
            }
            cout<<endl;
        }

        else {
            for(int i=0;i<len;i++){
                cout<<"(";
            }
            for(int i=0;i<len;i++){
                cout<<")";
            }
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