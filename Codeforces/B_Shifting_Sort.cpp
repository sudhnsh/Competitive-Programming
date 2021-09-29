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

    vector<ll> arr(n);
    rep(i,0,n)
    cin>>arr[i];
    vector< vector<ll> > ans;
    ll maxpos=-1;
        ll maxele=INT_MIN;
    for(int i=n-1;i>0;i--){
        maxpos=-1;
        maxele=INT_MIN;  

        for(int j=0;j<=i;j++){
            if(arr[j]>maxele){
                maxele=arr[j];
                maxpos=j;
            }
        }
        if(maxpos<i){
            vector<ll> tt;
            queue<ll> q;
            tt.push_back(maxpos+1);
            tt.push_back(i+1);
            tt.push_back(1);
            ans.push_back(tt);
            for(int j=maxpos;j<=i;j++){
                q.push(arr[j]);
            }
            ll zzz;
            if(!q.empty()){
                zzz=q.front();
                q.pop();
                q.push(zzz);
            }
            for(int j=maxpos;j<=i;j++){
                if(!q.empty()){
                zzz=q.front();
                q.pop();
                arr[j]=zzz;
                }
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }cout<<'\n';
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