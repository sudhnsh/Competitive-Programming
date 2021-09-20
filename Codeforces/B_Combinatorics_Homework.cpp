#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mo 1000000007
//by sudhnsh
void solve()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll mx=a+b+c-3;
    ll maxe=max(a,max(b,c));
    ll sum=a+b+c;
    ll mn=maxe-(sum-maxe)-1;
    if(m>=mn&&m<=mx)
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