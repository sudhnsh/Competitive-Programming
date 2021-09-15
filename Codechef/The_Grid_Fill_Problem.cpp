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
    if(n%2==0)
    {
        rep(i,0,n)
        {
            rep(j,0,n)
            {
                cout<<-1<<' ';
            }
            cout<<'\n';
        }
        return;
    }
    else
    {
        rep(i,0,n)
        {
            rep(j,0,n)
            {
                if(i==j)
                {
                    cout<<-1<<' ';
                }
                else
                {
                    cout<<1<<' ';
                }
            }
            cout<<'\n';
        }
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