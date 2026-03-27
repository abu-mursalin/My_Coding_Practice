#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;

    int len = s.size(),cnt1=0,cnt2=0;
    bool flag = false,flag1 = false,flag2=false;

    for(int i=0;i<len;i++){
        if(i!=len-1 && s[i]=='*' && s[i+1]=='*'){
            cout<<-1<<endl;
            return;
        }

        if(flag && s[i]=='<'){
            cout<<-1<<endl;
            return;
        }

        if(flag1 && (s[i]=='*' || s[i]=='<')){
            cout<<-1<<endl;
            return;
        }

        if(s[i]=='*'){
            flag=true;
        }
        if(s[i]=='>'){
            flag1=true;
            cnt1++;
        }
        if(s[i]=='<'){
            flag2=true;
            cnt2++;
        }

    }

    if(flag && flag1 && flag2)cout<<max(cnt1,cnt2)+1<<endl;
    else if(flag && flag1)cout<<cnt1+1<<endl;
    else if(flag && flag2)cout<<cnt2+1<<endl;
    else if(flag)cout<<1<<endl;
    else cout<<max(cnt1,cnt2)<<endl;
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