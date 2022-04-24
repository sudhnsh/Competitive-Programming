#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
// by sudhnsh
void solve()
{
   string s;
   cin>>s;
   string s1="";
   ll count=0;
   rep(i,1,s.size())
   {
       if(s[i]==s[i-1])
       {
           count++;
       }
       else if (s[i] > s[i - 1])
       {
           rep(j, 0, count+1)
           {
               s1 += s[i - 1];
           }
           count=0;
       }
       else
       {
           count=0;
       }
       
       s1+=s[i-1];
   }
   s1+=s[s.size()-1];
   cout<<s1;
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    rep(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << '\n';
    }
    return 0;
}