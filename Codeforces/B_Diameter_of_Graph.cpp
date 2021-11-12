#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define mo 1000000007
//by sudhnsh
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    k-=2;
    ll sum=(n*(n-1))/2;
    //cout<<sum<<'\n';
    if(m>sum)
    {
        cout<<"NO\n";
        return;
    }
    if(k>=2)
    {
        // if((n-m)>=1)
        // {
        //     cout<<"YES\n";
        // }
        // else 
        // {
        //     cout<<"NO\n";
        // }
        cout<<"YES\n";
    }
    else if(k==1)
    {
        if(sum==m)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    else if(k==0)
    {
        if(n==1)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
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