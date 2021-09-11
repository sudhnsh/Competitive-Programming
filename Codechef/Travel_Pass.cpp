#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,a,b;
    string s;
    cin>>n>>a>>b;
    cin>>s;
    ll count=0;
    rep(i,0,n)
    {
        if(s[i]=='0')
        {
            count+=a;
        }
        else
        count+=b;
    }
    cout<<count<<'\n';
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