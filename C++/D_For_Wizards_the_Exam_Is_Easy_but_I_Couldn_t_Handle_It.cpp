#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<pair<int,pair<int,int>>>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i].first;

    for(int i=1;i<n;i++){
        int cur_inv = 0;
        for(int j=i+1;j<=n;j++){
            if(v[j].first<v[i].first)cur_inv++;
            else if(v[j].first>v[i].first)cur_inv--;

            if(cur_inv>v[i].second.first){
                v[i].second = {cur_inv,j};
            }
        }
    }

    int max = -1, first_idx = 0, second_idx = 0;

    for(int i=1;i<n;i++){
        if(v[i].second.first>max){
            max = v[i].second.first;
            first_idx = i;
            second_idx = v[i].second.second;
        }
    }

    cout<<((first_idx>0)?first_idx:1)<<" "<<((second_idx>0)?second_idx:1)<<endl;
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