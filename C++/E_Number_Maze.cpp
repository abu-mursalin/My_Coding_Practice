#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string n;
    int a,b;
    cin>>n>>a>>b;

    if(n == "12"){
        if(a % 2 == 0)a=1;
        else a=0;
        if(b % 2 == 0)b=1;
        else b=0;
    }

    else if(n == "123"){
        if(a % 6 == 0)a=5;
        else a = a % 6 -1;
        if(b % 6 == 0)b=5;
        else b = b % 6 -1;
    }

    else if(n == "1234"){
        if(a % 24 == 0)a=23;
        else a = a % 24 -1;
        if(b % 24 == 0)b=23;
        else b = b % 24 -1;
    }

    string s1=n,s2=n;

    for(int i=0;i<a;i++)next_permutation(s1.begin(),s1.end());
    for(int i=0;i<b;i++)next_permutation(s2.begin(),s2.end());

    int cnt = 0;

    for(int i=0;i<n.size();i++){
        if(s1[i]==s2[i])cnt++;
    }

    cout<<cnt<<"A"<<n.size()-cnt<<"B"<<endl;
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