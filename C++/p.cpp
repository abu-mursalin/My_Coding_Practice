
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
 
int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll setbit = __builtin_popcount(n);
        cout<< ((1LL<<setbit)-1);
    }
}