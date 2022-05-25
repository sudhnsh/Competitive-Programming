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
   ll n;
   cin>>n;
   vector<ll> v(n);
   rep(i,0,n)
   {
       cin>>v[i];
   }
   ll sum=0;
   ll count1=0,count2=0;
   map<ll,ll> mp;
   rep(i,0,n)
   {
      if(v[i]==1)
      {
          count1++;
      }
      else if(v[i]==2)
      {
          count2++;
      }
   }
   sum+=(((count2)*(count2-1))/2);
   sum+=(((count1)*(count1-1))/2);
    sum+=(count1)*(n-count1);
    cout<<sum<<'\n';
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