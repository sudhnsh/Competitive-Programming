#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
struct Festival
{
    ll h;
    ll s;
    ll e;
};
bool comp(const Festival &a,const Festival &b)
{
    return a.h>b.h;
}
ll solve()
{
    ll d,n,k;
    cin>>d>>n>>k;
    vector<Festival> h(n);
    rep(i,0,n)
    {
        cin>>h[i].h>>h[i].s>>h[i].e;
    }
    sort(h.begin(),h.end(),comp);
    vector<ll> su;
    rep(i,0,d)
    {
        ll temp=0;
        ll sum=0;
        rep(j,0,n)
        {
            if(h[j].s<=i+1&&h[j].e>=i+1)
            {
                sum+=h[j].h;
                temp++;
            }
            if(temp>=k)
            {break;}
        }
        
        su.push_back(sum);
    }
    sort(su.begin(),su.end());
    return su[d-1];
}
int main()
{// ffst;
ll t;
cin>>t;
rep(i,0,t)
{
    cout<<"Case #"<<i+1<<": "<<solve()<<'\n';
}
return 0;
}