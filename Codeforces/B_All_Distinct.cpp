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
     map<ll,ll> mp;
     set<ll> ss;
     rep(i,0,n)
     {
        cin>>v[i];
        ss.insert(v[i]);
        mp[v[i]]++;
     }
     ll count=0;
     for(auto x:ss)
     {
        if(mp[x]>1)
        {
            count+=mp[x]-1;
        }
     }
     cout<<(v.size()-((count+1)/2)*2)<<'\n';
     

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