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
    ll a,b,p,q;
    cin>>a>>b>>p>>q;
    if(a==p&&b==q)
    {
        cout<<"0\n";
        return;
    }
    if((a+b)%2!=(p+q)%2)
    {
        cout<<"1\n";
        return;
    }
    else
    {
        cout<<"2\n";
        return;
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