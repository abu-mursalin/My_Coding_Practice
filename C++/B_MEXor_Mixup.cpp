#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
#define MAX 300000

int value_of_xor[MAX];

void set_xor(){
    for(int i=1;i<MAX;i++){
        value_of_xor[i] = value_of_xor[i-1]^i;
    }
}
 
void solve(){
    int a,b;
    cin>>a>>b;

    int total_xor = value_of_xor[a-1];

    if(total_xor == b)cout<<a<<endl;
    else if((total_xor ^ b) == a) cout<< a+2<<endl;
    else cout<<a+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    set_xor();
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}