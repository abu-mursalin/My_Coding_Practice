#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;

    ll min_area = 6*n;

    if(a*b>=min_area){
        cout<<a*b<<endl;
        cout<<a<<" "<<b<<endl;
    }

    else{
        min_area--;
        while(min_area++){
            unordered_map<ll,ll>m;

            for(ll i = min(a,b);i*i<=min_area;i++){
                if(min_area % i==0){
                    m[i]=min_area/i;
                    m[min_area/i]=i;
                }
            }

            for(auto u : m){
                if(u.first >= a && u.second>=b){
                    cout<<min_area<<endl<<u.first<<" "<<u.second<<endl;
                    return ;
                }
            }
        }
    }
    //for(auto u : m)cout<<u.first<<" "<<u.second<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    solve();
 
    return 0;
}