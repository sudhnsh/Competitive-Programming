#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define m 1000000007
//by sudhnsh
void solve()
{
    ll a[5];
    int in=0,en=0;
    rep(i,0,5)
    {
        cin>>a[i];
        if(a[i]==1)
        in++;
        else if(a[i]==2)
        en++;
    }
    if(in>en)
    {
        cout<<"INDIA\n";
    }
    else if(in<en)
    {
        cout<<"ENGLAND\n";
    }
    else
    {
        cout<<"DRAW\n";
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