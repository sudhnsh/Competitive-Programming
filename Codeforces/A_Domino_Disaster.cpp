#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    rep(i,0,n)
    {
        if(s[i]=='U')
        s[i]='D';
        else if(s[i]=='D')
        s[i]='U';
    }
    cout<<s<<'\n';
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}