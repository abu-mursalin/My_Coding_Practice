#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;

#define max 1000

ll arr[max];
vector<ll>prime;

void generate_prime(){
    for(int i=2;i*i<max;i++){
        if(arr[i]){
            for(int j=i*i;j<max;j+=i){
                arr[j]=0;
            }
        }
    }

    for(int i=3;i<max;i++){
        if(arr[i])prime.push_back(i);
    }
}
 
void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    if(k%2){
        for(int i=0;i<n;i++){
            if(v[i]%2)v[i]+=k;
        }
    }

    else{
        ll temp = 0,idx=0;
        while(true){
            if(k%prime[idx]!=0){
                temp=prime[idx];
                break;
            }
            idx++;
        }

        for(int i=0;i<n;i++){
            if(v[i]%temp!=0){
                ll t1=v[i]%temp;
                ll t2=temp-t1;
                ll t3=k%temp;
                while(t2%t3!=0)t2+=temp;
                ll t4=t2/t3;
                v[i]+=k*t4;
            }
        }
    }

    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    fill(arr,arr+max,1);
    generate_prime();

    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}