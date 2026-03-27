#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,i=0;
    cin>>n;
    n--;

    int temp = log2(n);
    temp = 1<<temp;
    
    while(n>=temp){
        cout<<n<<" ";
        n--;
    }

    while(temp>i){
        cout<<i<<" ";
        i++;
    }

    cout<<endl;
    return ;
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