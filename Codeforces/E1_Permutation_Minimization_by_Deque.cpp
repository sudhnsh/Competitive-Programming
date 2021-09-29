#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    ll ele;
    deque<ll> d;
    rep(i,0,n)
    {
        cin>>ele;
        if(d.size()==0)
        {
            d.push_back(ele);
        }
        else if(d.front()>=ele)
        {
            d.push_front(ele);
        }
        else
        {
            d.push_back(ele);
        }
    }
    deque <ll> :: iterator it;
    for (it = d.begin(); it != d.end(); ++it)
        cout  << *it<<' ';
    cout << '\n';
}
int main()
{ ffst;
ll t;
cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}