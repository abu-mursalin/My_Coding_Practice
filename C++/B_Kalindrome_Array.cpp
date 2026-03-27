#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    bool flag = true;

    for(int i=0,j=n-1;i<j;i++,j--){
        if(v[i] != v[j]){
            int change_element = v[j];

            for(int k=i,l=j-1;k<l;k++,l--){
                if(v[k] != v[l]){
                    if(v[k] == change_element)l++;
                    else if(v[l] == change_element)k--;
                    else {
                        flag = false;
                        break;
                    }
                }
            }

            if(flag){
                cout<<"YES"<<endl;
                return;
            }

            change_element = v[i];

            for(int k=i+1,l=j;k<l;k++,l--){
                if(v[k] != v[l]){
                    if(v[k] == change_element)l++;
                    else if(v[l] == change_element)k--;
                    else {
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }

            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return;
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