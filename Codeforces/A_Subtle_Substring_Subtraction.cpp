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
     string s; 
     cin>>s;
     //sort(s.begin(),s.end());
     ll count=0;
     if(s.size()%2==0)
     {
         rep(i,0,s.size())
         {
             count+=(s[i]-'a')+1;
         }
     }
     else
     {
         ll counta=0,countb=0;
        rep(i,1,s.size())
         {
             counta+=(s[i]-'a')+1;
         }
         counta-=((s[0]-'a')+1);
         rep(i,0,s.size()-1)
         {
             countb+=(s[i]-'a')+1;
         }
         countb-=((s[s.size()-1]-'a')+1);
         count=max(counta,countb);
     }
     if(count>0)
     {
         cout<<"Alice"<<' '<<count<<'\n';
     }
     else
     {
         cout<<"Bob"<<' '<<abs(count)<<'\n';
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