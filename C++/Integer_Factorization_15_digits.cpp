#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

#define MAX 30000000
 
vector<bool>prime(MAX/2+1,true);
vector<int>set_prime;
 
void prime_generator(){
    for(int i=1;(2*i+1)*(2*i+1)<MAX;i++){
        if(prime[i]){
            for(int j=(2*i+1)*(2*i+1);j<MAX;j+=(4*i+2)){
                prime[j/2]=false;
            }
        }
    }

    set_prime.push_back(2);

    for(int i=1;i<MAX/2+1;i++){
        if(prime[i])set_prime.push_back(2*i+1);
    }

    return;
}
 
void solve(ll n){
    ll cnt = 0,len=set_prime.size(); 

    for(int i=0;i<len;i++){
        ll j=set_prime[i];
        if(n%j==0){
            while(n%j==0){
                cnt++;
                n/=j;
            }

            cout<<j<<"^"<<cnt<<" ";
            cnt=0;
        }

        if(n==1)break;
        if(n<MAX && prime[n/2]){
            cout<<n<<"^"<<1<<endl;
            return;
        }
    }

    if(n>1)cout<<n<<"^"<<1<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    prime_generator();

    ll n=1;
 
    while(n){
        cin>>n;
        if(n==0)break;
        solve(n);
    }
 
    return 0;
}