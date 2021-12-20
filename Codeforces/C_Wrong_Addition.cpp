#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
// by sudhnsh
void solve()
{
   ll a,s;
   cin>>a>>s;
   ll sss=s;
   vector<string> ss;
   vector<string> ss1;
   ll tempa=0,temps=0,tempb=0;
   ll aa=a;
   while(a!=0||s!=0)
   {
       tempb *= 10;
       tempa=tempa+(a%10);
       ss1.push_back(to_string(tempa));
       a=a/10;
       temps=temps+(s%10);
       s=s/10;
       if(temps<tempa)
       {
           
           temps = temps + (10*(s % 10));
           s = s / 10;
       }
      // cout<<tempa<<' '<<temps<<'\n';
       tempb=tempb+(temps-tempa);
       ss.push_back(to_string(temps - tempa));
       tempa=0;
       temps=0;
       
   }
   rep(i,0,ss.size())
   {
       if(ss[ss.size()-i-1].size()>1)
       {
           cout<<-1<<'\n';
           return;
       }
   }
   reverse(ss1.begin(), ss1.end());
   reverse(ss.begin(), ss.end());
   ll final1;
   string s1="";
    rep(i,0,ss.size())
    {
        final1=stoi(ss1[i])+stoi(ss[i]);
        s1=s1+to_string(final1);
    }
    
   // cout<<s1<<' '<<to_string(sss);
    if(s1==to_string(sss))
    {
        ll c=0;
        while(true)
        {
            if(ss[c]!="0")
            break;
            c++;
        }

        rep(i, c, ss.size())
        {
            cout << ss[i] ;
        }
    }
    else
    {
        cout<<-1;
    }
    
   cout<<'\n';
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}