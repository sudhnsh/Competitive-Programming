#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
ll solve()
{
    ll n;
    cin>>n;
    vector<char> s(n);
    rep(i,0,n)
    {
        cin>>s[i];
    }
    vector<ll> ri(n);
    vector<ll> le(n);
    ll on=-1;
    rep(i,0,n)
    {
        if(s[i]=='0')
        {
            if(on==-1)
            ri[i]=LONG_LONG_MAX;
            else
            ri[i]=abs(i-on);
        }
        else
        {
            on=i;
            ri[i]=(0);
        }
        //cout<<ri[i]<<' ';
    }
    on=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            if(on==-1)
            le[i]=LONG_LONG_MAX;
            else
            le[i]=abs(i-on);
        }
        else
        { 
            on=i;
            le[i]=(0);
        }
        //cout<<le[i]<<' ';
    }
   // reverse(le.begin(),le.end());
    ll sum=0;
    rep(i,0,n)
    {
       // cout<<le[i]<<' '<<ri[i]<<'\n';
        sum+=min(le[i],ri[i]);
    }
    return sum;
}
int main()
{// ffst;
ll t;
cin>>t;
rep(i,0,t)
{
    cout<<"Case #"<<i+1<<": "<<solve()<<'\n';
}
return 0;
}