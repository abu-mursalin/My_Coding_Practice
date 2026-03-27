#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
typedef long long ll;
 
void solve(){
    int n,x;
    cin>>n>>x;

    string s;
    cin>>s;

    x--;

    //for(int i=0;i<n;i++)if(s[i]=='#')cnt++;

    int left=x-1,right=x+1;
    bool left1=false,right1=false;

    for(int i=x;i>=0;i--){
        if(s[i]=='#'){
            left=i;
            left1=true;
            break;
        }
    }

    for(int i=x;i<n;i++){
        if(s[i]=='#'){
            right=i;
            right1=true;
            break;
        }
    }

    int temp1=min(x+1,n-right+1);
    int temp2=min(left+2,n-x);

    if(x==0 || x==n-1)cout<<1<<endl;

    else if(!left1 && !right1)cout<<1<<endl;

    else if((!left1 && right1) || (left1 && !right1)){
        cout<<min(left+2,n-right+1)<<endl;
    }

    else if(s[x-1]=='#' || s[x+1]=='#')cout<<min(x+1,n-x)<<endl;

    else {
        cout<<max(temp1,temp2)<<endl;
    }
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