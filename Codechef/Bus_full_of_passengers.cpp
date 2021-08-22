#include<bits/stdc++.h>
using namespace std;
#define ll int
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
   ll n,m,q;
   cin>>n>>m>>q;
    char c;
    ll ele;
    vector<pair<char,ll> > v;
    rep(i,0,q)
    {
       cin>>c>>ele;
       v.push_back(make_pair(c,ele));
    }
    ll a[n]={0};
    ll count=0;
    rep(i,0,q)
    {
        if(v[i].first=='+')
        {
            a[v[i].second-1]++;
            count++;
        }
        else if(v[i].first=='-')
        {
            a[v[i].second-1]--;
            count--;
        }
        if(count>m)
        {
            cout<<"Inconsistent\n";
            return;
        }
        if(a[v[i].second-1]<0)
        {
            cout<<"Inconsistent\n";
            return;
        }
    }
    cout<<"Consistent\n";

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