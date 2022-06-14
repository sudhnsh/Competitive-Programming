#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
vector<vector<ll>> v1;
void trip()
{
    rep(i,0,10)
    {
        rep(j,0,10)
        {
            rep(k,0,10)
            {
                if(i+j+k==3||i+j+k==13||i+j+k==23)
                {
                    v1.push_back({i,j,k});
                }
            }
        }
    }
}
void solve()
{
    ll n;
    cin>>n;
    vec v(n);
    rep(i,0,n)
    {
        cin>>v[i];
        v[i]%=10;
    }
    sort(v.begin(),v.end());
    map<ll,ll> mp;
    rep(i,0,n)
    {
        mp[v[i]]++;
    }
    rep(i,0,v1.size())
    {
        rep(j,0,4)
        {
            if(j==3)
            {
                cout<<"YES\n";
                return;
            }
            if(mp[v1[i][j]]>0)
            {
                mp[v1[i][j]]--;
            }
            else if(j==0)
            { 
            break;
            }
            else if(j==1)
            {
                 mp[v1[i][0]]++;
                 break;
            }
            else
            {
                mp[v1[i][1]]++;
                mp[v1[i][0]]++;
                break;
            }
        }
       
    }
    cout<<"NO\n";
    

}
int main()
{
ffst;
trip();
ll t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}