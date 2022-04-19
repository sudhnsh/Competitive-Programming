#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define mod 1000000007
//by sudhnsh
void solve()
{
    ll n,m;
    cin>>n>>m;
    if(n==1||m==1)
    {
        if(n+m>3)
        {
            cout<<-1<<'\n';
            return;
        }
        else if(n+m==2)
        {
            cout<<0<<'\n';
            return;
        }
        else
        {
            cout<<1<<'\n';
        }
    }
    else
    {
        ll count=0;
        count+=(min(n,m)-1)*2;
        if(abs(n-m)%2==0)
        {
            count+=(2*(abs(n-m)));
        }
        else
        {
            count+=(2*(abs(n-m)-1));
            count+=1;
        }
        cout<<count<<'\n';
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