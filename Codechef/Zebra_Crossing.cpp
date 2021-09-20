#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    char c=s[0];
    string s1="";
    ll o=-1,z=-1;
    rep(i,1,n)
    {
        if(s[i-1]!=s[i])
        {
            s1+=s[i];
            if(s[i]=='1')
            {
                o=i+1;
            }
            else
            {
                z=i+1;
            }
        }
        
    }
    if(s1.size()<k)
    {
        cout<<-1<<'\n';
    }
    else
    {
        if(k%2==1)
        {
            if(s[0]=='0')
            {
                for(int i=n-1;i>=0;i--)
                {
                    if(s[i]=='1')
                    {
                        cout<<i+1<<'\n';
                        return;
                    }
                }
            }
            else
            {
                for(int i=n-1;i>=0;i--)
                {
                    if(s[i]=='0')
                    {
                        cout<<i+1<<'\n';
                        return;
                    }
                }
            }
        }
        else
        {
            if(s[0]=='1')
            {
               for(int i=n-1;i>=0;i--)
                {
                    if(s[i]=='1')
                    {
                        cout<<i+1<<'\n';
                        return;
                    }
                }
            }
            else
            {
                for(int i=n-1;i>=0;i--)
                {
                    if(s[i]=='0')
                    {
                        cout<<i+1<<'\n';
                        return;
                    }
                }
            }
        }   
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