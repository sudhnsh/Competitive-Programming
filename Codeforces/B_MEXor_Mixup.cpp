#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
int computeXOR(int n)
{

  if (n % 4 == 0)
    return n;
 

  if (n % 4 == 1)
    return 1;
 
  if (n % 4 == 2)
    return n + 1;
 

  return 0;
}
void solve()
{
    ll m,x;
    cin>>m>>x;
    ll ans=0;
    ans=computeXOR(m-1);
   // cout<<ans<<'\n';
    if(ans==x)
    {
        cout<<m<<'\n';
        return;
    }
    if(m==(ans^x))
    {
        cout<<m+2<<'\n';
        return;
    }
    else
    {
        cout<<m+1<<'\n';
        return;
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