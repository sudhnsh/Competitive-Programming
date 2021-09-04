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
    map<char,ll> mp;
    rep(i,0,n)
    {
        if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9')
        {
            cout<<1<<'\n';
            cout<<s[i]<<'\n';
            return;
        }
        mp[s[i]]++;
    }
    rep(i,0,n){
        if((s[i]=='2'||s[i]=='5')&&i!=0)
        {
            string s1=s.substr(i-1,(2));
            cout<<2<<'\n';
            cout<<s1<<'\n';
            return;
        }
    }
    rep(i,0,n){
        if(mp[s[i]]>=2)
        {
            cout<<2<<'\n';
            cout<<s[i]<<s[i]<<'\n';
            return;
        }
        if(mp['2']>=1&&mp['7']>=1)
        {
            cout<<2<<'\n';
            cout<<27<<'\n';
            return;
        }
        if(mp['5']>=1&&mp['7']>=1)
        {
            cout<<2<<'\n';
            cout<<57<<'\n';
            return;
        }
     
    }
    
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