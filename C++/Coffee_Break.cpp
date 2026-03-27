#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;

    int a = ((s[0]-'0')*10 + (s[1]-'0'));
    int b = ((s[3]-'0')*10 + (s[4]-'0'));

    if(a == 0 && b == 0)cout<<"00:00"<<endl;
    else if(a>22)cout<<"00:00"<<endl;
    else if(a==22 && b>22)cout<<"00:00"<<endl;
    else if(a>11)cout<<"22:22"<<endl;
    else if(a==11 && b>11)cout<<"22:22"<<endl;
    else cout<<"11:11"<<endl;
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
