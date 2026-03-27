#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    unsigned int n;
    cin>>n;

    for(int i=0,j=31;i<j;i++,j--){
        if((((1<<i) & n) && ((1<<j) & n) == 0) || ((((1<<i) & n) == 0) && ((1<<j) & n))){
            n^=(1<<i);
            n^=(1<<j);
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