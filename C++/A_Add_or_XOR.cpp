#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int temp = (b-a)/2;

    if(a-b>1)cout<<-1<<endl;

    else if(a-b==1 && a%2==0)cout<<-1<<endl;

    else if(a-b==1)cout<<y<<endl;

    else if(x<=y)cout<<(b-a)*x<<endl;

    else if((b-a)%2==0)cout<<(x+y)*temp<<endl;

    else if(a%2)cout<<((temp+1)*x + temp*y)<<endl;

    else cout<<(temp*x + (temp+1)*y)<<endl;
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