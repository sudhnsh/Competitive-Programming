#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    if(s==s1)
    {
        cout<<"YES\n";
        return;
    }
    ll count=0,count1=0;
    rep(i,0,n)
    {
        if(s1[i]=='0')
        {
            count++;
        }
        else if(s1[i]=='1')
        {
            count1++;
        }
    }
    if(count&&count1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{ ffst;
ll t;
cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}