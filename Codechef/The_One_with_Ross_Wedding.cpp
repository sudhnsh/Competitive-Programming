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
    ll n;
    cin >> n;
    ll x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    ll x1=0,y1=0;
    bool b=true;
    rep(i,0,n)
    {
        if(s[i]=='1'&&b)
        {
            if(x1<x)
            x1++;
            else
            x1--;
            
        }
        else if(s[i]=='0'&&b)
        {
            if (y1 < y)
                y1++;
            else
                y1--;
            b=false;
        }
        else if(s[i]=='1')
        {
            if(y1<y)
            y1++;
            else 
            y1--;
        }
        else if(s[i]=='0')
        {
            if (x1 < x)
                x1++;
            else
                x1--;
            b=true;
        }
    }
    if(x1==x&&y1==y)
    {
        cout <<"YES\n";
        return;
    }
  //  cout << x1 << ' ' << y1 << '\n';
    b=false;
    x1=0;
    y1=0;
    rep(i, 0, n)
    {
        if (s[i] == '1' && b)
        {
            if (x1 < x)
                x1++;
            else
                x1--;
        }
        else if (s[i] == '0' && b)
        {
            if (y1 < y)
                y1++;
            else
                y1--;
            b = false;
        }
        else if (s[i] == '1')
        {
            if (y1 < y)
                y1++;
            else
                y1--;
        }
        else if (s[i] == '0')
        {
            if (x1 < x)
                x1++;
            else
                x1--;
            b = true;
        }
    }
    if (x1 == x && y1 == y)
    {
        cout << "YES\n";
        return;
    }
  //  cout<<x1<<' '<<y1<<'\n';
    cout<<"NO\n";
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