#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define mod 1000000007
//by sudhnsh
    struct sdd
    {
        string first;
        ll ones;
    };

    bool comp(sdd s1,sdd s2)
    {
        return ((s1.ones)>(s2.ones));
    }
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<sdd > v(n);
    rep(i,0,n)
    {
        cin>>v[i].first;
        v[i].ones=0;
    }
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(v[i].first[j]=='0')
            {
                v[i].ones++;
            }
        }
        
    }
    sort(v.begin(),v.end(),comp);
    string s;
    rep(i,0,n)
    {
        s+=v[i].first;
    }
    ll count=0,ans=0;
    rep(i,0,s.size())
    {
            if(s[i]=='0')
            {
                ans+=count;
            }
            else
            {
                count++;
            }
        
    } 
    cout<<ans<<'\n';
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