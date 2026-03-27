#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

#define MAX 100000000
int prime[MAX/2+1];
vector<int>v;

void prime_generator(){
    for(int i=3;i*i<MAX;i+=2){
        if(prime[i/2]){
            for(int j=i*i;j<MAX;j+=(2*i)){
                prime[j/2]=0;
            }
        }
    }

    v.push_back(2);
    for(int i=3;i<MAX;i+=2){
        if(prime[i/2])v.push_back(i);
    }
}
 
void solve(){
    int len = v.size();

    int i=0;

    while(i<=len){
        cout<<v[i]<<endl;
        i+=100;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    fill(prime,prime+MAX/2+1,1);
    prime_generator();
 
    solve();
 
    return 0;
}