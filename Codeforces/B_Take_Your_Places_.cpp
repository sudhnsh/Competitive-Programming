#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> o,e;
    rep(i,0,n)
    {
        cin>>v[i];
        if(v[i]%2!=0)
        {
            o.push_back(i);
        }
        else
        {
            e.push_back(i);
        }
    }
    if(n%2==0)
    {
        if(o.size()!=e.size())
        {
            cout<<-1<<'\n';
            return;
        }
        ll count=0;
        ll ans;
        for(int i=0;i<o.size();i++)
        {
            count+=abs((2*i)-o[i]);
        }
        ans=count;
        count=0;
        rep(i,0,e.size())
        {
            count+=abs((2*i)-e[i]);
        }
        ans=min(count,ans);
        cout<<ans<<'\n';
    }
    else
    {
        ll ev=e.size(),od=o.size();
        if(abs(ev-od)>1)
        {
            cout<<-1<<'\n';
            return;
        }
        if(o.size()>e.size())
        {
          //  cout<<' ';
            ll count=0;
            for(int i=0;i<o.size();i++)
            {
            count+=abs((2*i)-o[i]);
            }
            cout<<count<<'\n';
        }
        else
        {
            //cout<<'e';
            ll count=0;
            for(int i=0;i<e.size();i++)
            {
            count+=abs((2*i)-e[i]);
            }
            cout<<count<<'\n';
        }
    }
    

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}