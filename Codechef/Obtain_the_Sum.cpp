#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,s;
    cin>>n>>s;
    if(((n*(n+1))/2)-s<=0)
    {
        cout<<-1<<'\n';
        return;
    }
    else if((((n*(n+1))/2)-s)>n)
    {
        cout<<1<<'\n';
    }
    cout<<(((n*(n+1))/2)-s)<<'\n';
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