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
    ll n,k;
    cin>>n>>k;
    string s;
    vector<ll> v(n,0);
    cin>>s;
    if(k%2!=0)
    {
    rep(i,0,n)
    {
        if(s[i]=='1'&&k>0)
        {
            k--;
            v[i]++;
        }
        else if(s[i]=='1')
        {
            s[i]='0';
        }
        else if(s[i]=='0')
        {
            s[i]='1';
        }
    }
    if(k%2!=0)
    {
        if(s[n-1]=='1')
        {
            s[n-1]='0';
            v[n-1]++;
            k--;
        }
    }
    v[n-1]+=k;
    cout<<s<<'\n';
    rep(i,0,n)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
    }
    else
    {
        rep(i,0,n)
        {
            if(s[i]=='0'&&k>0)
            {
                k--;
                v[i]++;
                s[i]='1';
            }
        }
        if(k%2!=0)
        {
            if(s[n-1]=='1')
            {
                s[n-1]='0';
                v[n-1]++;
                k--;
            }
        }
        v[n-1]+=k;
    cout<<s<<'\n';
    rep(i,0,n)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
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