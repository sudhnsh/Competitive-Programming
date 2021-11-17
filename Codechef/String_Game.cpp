#include<bits/stdc++.h>
using namespace std;
#define ll int
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    string s;
    ll o=0,z=0;
    cin>>s;
    rep(i,0,n)
    {
        if(s[i]=='0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    bool b=true;
    ll mn=min(z,o);
    ll mx=max(z,o);
    //cout<<mn<<' '<<mx<<' ';
    while(true)
    {
        if(mn==0)
        {
            break;
        }
        if(mn%2!=0)
        {
            mn--;
            
        }
        else if(mx%2!=0)
        {
            mx--;
        }
        else 
        {
            mx--;
        }
        if(mn>mx)
        {
            swap(mn,mx);
        }
        if(b)
        {
            b=false;
        }
        else
        {
            b=true;
        }
       // cout<<b<<' ';
    }
    if(b)
    {
        cout<<"Bob\n";
    }
    else
    {
        cout<<"Alice\n";
    }

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