#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    string s1="";
    char c1='a',c2='b';
    rep(i,0,650)
    {
       // cout<<c1<<c2<<'\n';
        if(c1==s[0]&&c2==s[1])
        {
            cout<<i+1<<'\n';
            break;
        }
        if(c2=='z')
        {
            c2='a';
            c1++;
        }
        else{
        c2++;
        if(c1==c2)
        {
         c2++;   
        }
        }

    }
}
int main()
{
ffst;
ll t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}