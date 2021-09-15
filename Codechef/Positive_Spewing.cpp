#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
bool check(vector<ll> v)
{
    rep(i,0,v.size())
    {
        if(v[i]!=0)
        return false;
    }
    return true;
}
void solve()
{
     ll n,s;
    ll sum = 0;
    cin>>n>>s;
    vector<ll> arr(n);
    ll negative = -1;
    ll left[n] = {0};
    ll right[n] = {0};

    ll start = 0;
    rep(i,0,n){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i] > 0 && negative == -1)
        negative = i; 
        
    } 
    if(check(arr)||sum==0)
    {
        cout<<0<<'\n';
        return;
    }
    // if(negative == -1){
    //     cout<<sum<<"\n";
    //     return;
    // }

 

    rep(i,0,n){
        ll pos = (i+negative)%n;
        if(arr[pos] > 0){
            start = 0;
            left[pos] = 0;
        }else{
            start++;
            left[pos] = start;
        }
    }
 
    start = 0;
    rep(i,0,n){
        ll pos = (negative - i);
        if(pos<0){
            pos = n+pos;
        }
        if(arr[pos] > 0 ){
            start=0;
            right[pos] = 0;
        }else{
            start++;
            right[pos] = start;
        }
    }
       // rep(i,0,n)
    // {
    //     cout<<left[i]<<' '<<right[i]<<' ';
    // }
    map <ll,ll> mp;
    ll mx = 0;
    ll init = 0;
    rep(i,0,n){
        mx = max(mx,min(left[i],right[i]));
        mp[min(left[i],right[i])]++;
    }
    
    for(int i=0;i<=mx && i<s;i++){
        init += mp[i];
        sum += 2*init;
    }
    if(s>mx){
        sum += ((s-mx-1)*n)*2;
    }
    cout<<sum;
    cout<<"\n";
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