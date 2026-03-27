#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;

    int cnt = 0,temp1=0,temp2=0;

    for(int i=0;i<s.size();i++){
        if(s[i] == '(')temp1++;
        else temp2++;

        if(temp1 == temp2){
            cnt++;
            temp1=0;
            temp2=0;
        }
    }

    if(cnt>=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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