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
    if((n/2)%2==0)
    {
        cout<<"YES\n";
        ll i=1;
        while(i<=(n/4))
        {
            cout<<i<<' ';
            i++;
        }
        i=n;
        while(i>(3*n)/4)
        {
            cout<<i<<' ';
            i--;
        }
        cout<<'\n';
        i=n/4;
        i++;
        while(i<=(3*n)/4)
        {
            cout<<i<<' ';
            i++;
        }
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