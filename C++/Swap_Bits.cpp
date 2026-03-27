#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    unsigned int n;
    cin>>n;

    for(int i=0;i<31;i+=2){
        if((((1<<i) & n) && ((1<<(i+1)) & n) == 0) || ((((1<<i) & n) == 0) && ((1<<(i+1)) & n))){
            n^=(1<<i);
            n^=(1<<(i+1));
        }
    }

    cout<<n<<endl;
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