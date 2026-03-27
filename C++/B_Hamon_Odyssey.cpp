#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,total_and;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0)total_and=v[i];
        else total_and &= v[i];
    }

    if(total_and){
        cout<<1<<endl;
        return;
    }

    int num_of_group = 0,sum=-1;

    for(int i=0;i<n;i++){
        if(sum<0)sum=v[i];
        else sum &= v[i];

        if(sum == total_and){
            num_of_group++;
            sum = -1;
        }
    }

    cout<<num_of_group<<endl;
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