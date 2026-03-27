#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    string a,b;
    cin>>a>>b;

    int len = a.size(),j=0,i=0;

    for(i=0;i<len;i++){
        if(a[i] == b[j])j++;
        else if(j==0)continue;
        else {
            j=0;
            i--;
        }
    }

    for(int k=j,l=0;k<len;k++,l++){
        if(a[l] != b[k]){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<len-j<<endl;
}

// void solve(){
//     string a, b;
//     cin >> a >> b;
    
//     string doubled = a + a;
//     size_t pos = doubled.find(b);
    
//     if(pos == string::npos || pos >= a.size()){
//         cout << -1 << endl;
//     } else {
//         cout << pos << endl;
//     }
// }

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}