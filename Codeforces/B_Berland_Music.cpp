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
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    return a.second<b.second;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n); 
    rep(i,0,n)
    {
        cin>>v[i];
    }
    vpair v1,v2;
    string s;
    cin>>s;
    rep(i,0,n)
    {
        if(s[i]=='0')
        {
            v1.push_back(make_pair(v[i],i));
        }
        else
        {
            v2.push_back(make_pair(v[i],i));
        }  
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    rep(i,0,v1.size())
    {
       
        v1[i].first=i+1;
       
    }
    rep(i,0,v2.size())
    {
        v2[i].first=(i+1)+v1.size();
    }
    sort(v1.begin(),v1.end(),comp);
    sort(v2.begin(), v2.end(), comp);
    // rep(i,0,v1.size())
    // {
    //     cout<<v1[i].first<<' '<<v1[i].second<<' ';
    // }
    ll j=0,k=0;
    rep(i,0,n)
    {
        if(j<v1.size()&&k<v2.size()){
        if(v1[j].second<v2[k].second)
        {
            cout<<v1[j].first<<' ';
            j++;
          
        }
        else
        {
            cout<<v2[k].first<<' ';
            k++;
          
        }
        }
        else if(j>=v1.size())
        {
            rep(l,k,v2.size())
            {
              
                cout << v2[l].first << ' ';
            }
            break;
        }
        else 
        {
            rep(l, j, v1.size())
            {
                cout << v1[l].first << ' ';
            }
            break;
        }

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