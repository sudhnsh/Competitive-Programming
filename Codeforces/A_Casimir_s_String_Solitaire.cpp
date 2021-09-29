#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    string s;
    cin>>s;
    ll a=0,b=0,c=0;
    rep(i,0,s.size())
    {
        if(s[i]=='A')
            a++;
        if(s[i]=='B')
            b++;
        if(s[i]=='C')
            c++;
    }
    if(a+c==b)
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