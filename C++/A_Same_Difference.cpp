#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int>m;

    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    cout<<n-m[s[n-1]]<<endl;
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