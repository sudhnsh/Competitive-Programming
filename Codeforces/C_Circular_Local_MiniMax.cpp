#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vec v(n);
    rep(i,0, n)
    {
        cin>>v[i];
    }
    if(n%2==0)
    {
        sort(v.begin(),v.end());
        vec v1,v2;
        rep(i,0,n/2)
        {
            v1.push_back(v[i]);
            v1.push_back(v[i+(n/2)]);
        }
        rep(i,0,n/2)
        {
            v2.push_back(v[i+(n/2)]);
            v2.push_back(v[i]);
        }
        bool b=false,c=false;
        rep(i,0,n-1)
        {
            if(v1[i]==v1[i+1])
            {
                b=true;
                break;
            }
        }
        if(v1[0]==v1[n-1])
        {
            b=true;
        }
        rep(i,0,n-1)
        {
            if(v2[i]==v2[i+1])
            {
                c=true;
                break;
            }
        }
        if(v2[0]==v2[n-1])
        {
            c=true;
        }
        if(b&&c)
        {
            cout<<"NO\n";
        }
        else if(!b)
        {
            cout<<"YES\n";
            rep(i,0,n)
            {
                cout<<v1[i]<<' ';
            }
            cout<<'\n';
        }
        else if(!c)
        {
            cout<<"YES\n";
            rep(i,0,n)
            {
                cout<<v2[i]<<' ';
            }
            cout<<'\n';
        }

    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{
ffst;
ll t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}