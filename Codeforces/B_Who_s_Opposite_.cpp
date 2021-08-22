#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll d=abs(b-a);
    if(abs(a-b)<=1)
    {
        cout<<"-1\n";
        return;
    }
    ll max=abs(b-a)*2;
    if(c>max)
    {
        cout<<"-1\n";
        return;
    }
    if(b>max||a>max)
    {
        cout<<"-1\n";
        return;
    }
    if(c>(abs(b-a)))
    {
        cout<<c-abs(b-a)<<'\n';
        return;
    }
    else
    {
        cout<<c+abs(b-a)<<'\n';
        return;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}