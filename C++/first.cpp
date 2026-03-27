#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
#define MAX 10000000+1

int p_fact[MAX];

void prime_factorization(){
    for(int i=0;i<MAX;i++)p_fact[i]=i;

    for(int i=2;i*i<MAX;i++){
        if(p_fact[i]==i){
            for(int j=i*i;j<MAX;j+=i){
                if(p_fact[j]==j)p_fact[j]=i;
            }
        }
    }
}

void solve(int n){
    cout<<1;
    while(p_fact[n]!=n){
        cout<<" x ";
        cout<<p_fact[n];
        n/=p_fact[n];
    }

    if(n!=1)cout<<" x "<<p_fact[n];
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    prime_factorization();

    int n;

    while(cin>>n){
        solve(n);
        //break;
    }
 
    return 0;
}