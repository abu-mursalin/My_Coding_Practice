#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

#define MAX 100011
 
vector<bool>prime(MAX/2+1,true);
 
void prime_generator(){
    for(int i=1;(2*i+1)*(2*i+1)<MAX;i++){
        if(prime[i]){
            for(int j=(2*i+1)*(2*i+1);j<MAX;j+=(4*i+2)){
                prime[j/2]=false;
            }
        }
    }
}

void solve(int n){
    if(n<=2){
        cout<<1<<endl<<1<<" ";
    }
    else{
        cout<<2<<endl<<1<<" ";
    }

    for(int i=3;i<=n+1;i+=2){
        if(prime[i/2])cout<<1<<" ";
        else cout<<2<<" ";

        if(i+1 <= n+1)cout<<2<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    prime_generator();
 
    int n;
    cin>>n;

    solve(n);
 
    return 0;
}