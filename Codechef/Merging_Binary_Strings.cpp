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
    string s1,s2;
    cin>>s1>>s2;
    vector<ll> v1,v2;
    v1.push_back(0);
    v2.push_back(0);
    rep(i,0,n)
    {
        if(s1[i]=='0'&&s1[i+1]!='0')
        {
            v1.push_back(i+1);
        }
        if(s2[i]=='0'&&s2[i+1]!='0')
        {
            v2.push_back(i+1);
        }
    }
    string s="";
    ll i=1,j=1;
    while(true)
    {
        
        if(i==v1.size()||j==v2.size())
        {
            break;
        }
        if (lexicographical_compare(s1.begin()+v1[i-1], s1.begin() +v1[i] ,s2.begin()+v2[j-1] , s2.begin() + v2[j]))
        {
           //cout<<1<<v1[i]<<' ';
            string sb=s1.substr(v1[i-1],v1[i]-v1[i-1]);
      //      cout<<sb<<' ';
            s+=sb;
            i++;
        }
        else
        {
           // cout<<2<<v2[j]<<' ';
            string sb = s2.substr(v2[j - 1], v2[j] - v2[j - 1]);
            s+=sb;
    //        cout << sb << ' ';
            j++;
        }
        
    }
    rep(l,i,v1.size())
    {
      //  cout<<1<<v1[l]<<' ';
        string sb = s1.substr(v1[l - 1], v1[l] - v1[l - 1]);
        s+=sb;
   //     cout << sb << ' ';
    }
    rep(l, j, v2.size())
    {
      // cout << 2 << v2[l] << ' ';
        string sb = s2.substr(v2[l - 1], v2[l] - v2[l - 1]);
        s+=sb;
  //      cout << sb << ' ';
    }
    string sb = s1.substr(v1[v1.size()-1], n - v1[v1.size()-1]);
    s+=sb;
 //   cout << sb << ' ';
    sb = s2.substr(v2[v2.size()-1], n - v2[v2.size()-1]);
    s+=sb;
 //   cout << sb << ' ';
    //cout << s << ' ';
    reverse(s.begin(),s.end());
    
    ll count=0;
    ll sum=0;
    rep(i,0,2*n)
    {
        if(s[i]=='0')
        {
            count++;
        }
        else
        {
            sum+=count;
        }
        
    }
    cout<<sum<<'\n';
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