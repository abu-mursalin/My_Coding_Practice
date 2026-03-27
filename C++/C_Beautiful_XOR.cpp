#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int a,b;
    cin>>a>>b;

    if(a == b)cout<<0<<endl;
    else if(a>b){
        int c=a,d=b,cnt1=0,cnt2=0;

        while(c){
            c>>=1;
            cnt1++;
        }

        while(d){
            d>>=1;
            cnt2++;
        }

        if(cnt1 == cnt2){
            cout<<1<<endl<<(a^b)<<endl;
        }

        else{
            cout<<2<<endl;
            c = (1<<(cnt1-1))^a^b;
            cout<<c<<" "<<(1<<(cnt1-1))<<endl;
        }
    }
    else {
        int c=a,d=b;
        while(c && d){
            c>>=1;
            d>>=1;
        }

        if(c || d)cout<<-1<<endl;
        else cout<<1<<endl<<(a^b)<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }

     //cout<<(28^31);
 
    return 0;
}