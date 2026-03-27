#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int mask = 0;mask<(1<<n);mask++){
        int sum = 0;

        for(int i=0;i<n;i++){
            if(mask & (1<<i))sum-=v[i];
            else sum+=v[i];
        }

        if(sum % 360 == 0){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}