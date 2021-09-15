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
    switch(n%4)
    {
        case 1:cout<<"East";
        break;
        case 2:cout<<"South";
        break;
        case 3:cout<<"West";
        break;
        case 0:cout<<"North";
        break;
    }
    cout<<'\n';
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