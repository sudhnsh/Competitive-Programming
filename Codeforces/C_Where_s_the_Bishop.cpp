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
    vector<vector<char>> v(8,vector<char> (8,'.'));
    rep(i,0,8)
    {
        rep(j,0,8)
        {
            cin>>v[i][j];
        }
    }
    rep(i,0,8)
    {
        rep(j,0,8)
        {
            if(i>0&&j>0&&i<8&&j<8&&v[i][j]=='#')
            {
                if(v[i-1][j-1]=='#'&&v[i+1][j+1]=='#'&&v[i+1][j-1]=='#'&&v[i-1][j+1]=='#')
                {
                    cout<<i+1<<' '<<j+1<<'\n';
                    return;
                }
            }
        }
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