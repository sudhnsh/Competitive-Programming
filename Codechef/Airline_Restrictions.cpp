#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
    ll a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    if(a+b<=d&&c<=e)
    {
        cout<<"YES\n";
    }
    else if(a+c<=d&&b<=e)
    {
        cout<<"YES\n";
    }
    else if(b+c<=d&&a<=e)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
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