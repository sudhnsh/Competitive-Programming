#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
   ll n,count=0;
   cin>>n;
   if(n==1)
   {
       cout<<0<<'\n';
       return;
   }
   ll sum=0;
   while((n-sum)%2==0)
   {
     count++;
     sum=sum+((n-sum)/2);  
   }
    cout<<count<<'\n';
}
int main()
{
    // ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}