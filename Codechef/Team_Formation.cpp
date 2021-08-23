#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
   ll n;
   cin>>n;
   string s,t;
   cin>>s>>t;
   int count1=0,count2=0,common=0;
   rep(i,0,n)
   {
       if(s[i]=='1')
       count1++;
       if(t[i]=='1')
       count2++;
   }
    n=n/2;
    ll mn=min(n,(long long)(min(count1,count2)));
   cout<<mn<<'\n';
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}