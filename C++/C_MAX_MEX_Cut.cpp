#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    string s1,s2;
    cin>>s1>>s2;

    int ans = 0;

    for(int i=0;i<n;i++){
        int cnt_1 = 0,cnt_0  = 0;

        if(s1[i] == '1')cnt_1++;
        else cnt_0++;

        if(s2[i] == '1')cnt_1++;
        else cnt_0++;

        if(cnt_1 && cnt_0)ans += 2;

        else if(cnt_1 && i<n-1){
            if(s1[i+1] == '0' && s2[i+1] == '0'){
                ans += 2;
                i++;
            }
        }

        else if(cnt_0 && i<n-1){
            if(s1[i+1] == '1' && s2[i+1] == '1'){
                ans+=2;
                i++;
            }
            else ans++;
        }

        else if(cnt_0)ans++;
    }

    cout<<ans<<endl;
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