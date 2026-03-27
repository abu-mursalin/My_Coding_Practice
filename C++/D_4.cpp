#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

int prime[1001];
vector<int>v;

void primegenerator(){
    for(int i=2;i*i<1001;i++){
        if(prime[i]){
            for(int j=i*i;j<1001;j+=i)prime[j]=0;
        }
    }

    for(int i=2;i<1001;i++){
        if(prime[i])v.push_back(i);
    }
}
 
void solve(){
    int n;
    cin>>n;

    vector<int>ans;

    for(int i=0;i<v.size();i++){
        if(v[i]>n)break;

        ans.push_back(v[i]);
        int temp = v[i]*v[i];

        while(temp<=n){
            if(temp % 2 ==0 && v[i]!=2){
                temp*=2;
                continue;
            }
            ans.push_back(temp);
            temp*=2;
        }
    }

    cout<<ans.size()<<endl;
    for(auto u:ans)cout<<u<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    fill(prime,prime+1001,1);
    primegenerator();
 
    solve();
 
    return 0;
}