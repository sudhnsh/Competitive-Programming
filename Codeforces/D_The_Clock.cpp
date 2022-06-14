#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
vector<int> v1={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};
void solve()
{
    ll hr,mi,t;
    char c;
    ll count=0;
    cin>>hr>>c>>mi>>t;
    ll temp=(hr*60)+mi;
    ll temp2=temp;
    do{
        rep(i,0,16)
        {
            if(temp==v1[i])
            {
                count++;
                break;
            }
        }
        temp+=t;
        temp%=1440;
    }while(temp!=temp2);
    cout<<count<<'\n';
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