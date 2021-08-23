#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll n;
    cin>>n;
    vector<string> s(n);
    rep(i,0,n)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    string s1="";
    rep(i,0,n)
    {
        if(s[i][i]=='1')
        s1+="0";
        else
        s1+="1";
    }
    cout<<s1<<'\n';
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