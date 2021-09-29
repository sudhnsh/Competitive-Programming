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
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }    
    vector<ll> v1=v;
    sort(v1.begin(),v1.end());
    vector< pair<ll,ll> > mp;
    rep(i,0,n)
    {
        mp.push_back(make_pair(v1[i],i));
    }
    vector<ll> f,g;
    rep(i,0,n)
    {
        rep(j,i+1,n)
        {
            if(mp[i].first==v[j])
            {
                //cout<<j<<' ';
                ll x=v[j];
                // cout<<j<<'\n';
                // rep(k,0,n)
                // {
                //     cout<<v[k]<<' ';
                // }
                // cout<<'\n';
                // cout<<x<<'\n';
                f.push_back(i+1);
                g.push_back(j+1);
                for(int k=j;k>i;k--)
                {
                    v[k]=v[k-1];
                }                
                v[i]=x;
                break;
            }
        }
    }
    // rep(k,0,n)
    //             {
    //                 cout<<v[k]<<' ';
    //             }
    //             cout<<'\n';
    cout<<f.size();
    rep(i,0,f.size())
    {
        cout<<'\n'<<f[i]<<' '<<g[i]<<' '<<g[i]-f[i];
    }
    cout<<'\n';

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