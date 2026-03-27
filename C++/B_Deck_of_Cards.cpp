#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<char>v(n);

    int i=0,j=n-1,cnt=0;

    if(n == k){
        for(int i=0;i<n;i++)cout<<'-';
        cout<<endl;
        return;
    }

    for(int l=0;l<k;l++){
        if(s[l]=='0')v[i++]='-';
        else if(s[l]=='1')v[j--]='-';
        else cnt++;
    }

    int temp = n - (cnt + k);

    while(cnt-- && i<=j){
        v[i++]='?';
        v[j--]='?';
    }

    while(temp > 0 && temp--){
        v[i++]='+';
    }

    for(auto u : v)cout<<u;
    cout<<endl;
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