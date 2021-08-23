#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll n;
    cin>>n;
    int maximum = 0;
    int ans = 0;
    map <ll, int> mp;   
    for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            mp[temp]++;
            maximum = max(maximum,mp[temp]);
        }
    if(n<=2){
        ans = 0;
        }
        else{
        ans = min(n-maximum, n-2);
        }
        cout<<ans<<"\n";
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}