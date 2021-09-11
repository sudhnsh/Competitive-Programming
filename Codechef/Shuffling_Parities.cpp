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
    ll ele,o=0,e=0;
    rep(i,0,n)
    {
        cin>>ele;
        if(ele%2==0)
        {
            e++;
        }
        else 
        {
            o++;
        }
    }
    //cout<<o<<' '<<e<<'\n';
    cout<<min(o,((n)/2))+min(e,((n+1)/2))<<'\n';
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