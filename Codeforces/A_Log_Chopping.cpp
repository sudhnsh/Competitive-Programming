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
     ll count=0;
     rep(i,0,n)
     {
         cin>>v[i];
         count+=(v[i]-1);
     }
     if(count%2!=0)
     {
         cout<<"errorgorn\n";
     }
     else
     {
         cout<<"maomao90\n";
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