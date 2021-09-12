#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
ll check(ld h,ld k,vector<ld> arr_x,vector<ld> arr_y,ll n){
ll count = 0;
rep(j,0,n){
if(h-arr_x[j]==0 && k-arr_y[j]==0){
continue;
}
else if((h-arr_x[j]==0 && k-arr_y[j]!=0) || (h-arr_x[j]!=0 && k-arr_y[j]==0) ){
count++;
}
else if(abs(h-arr_x[j])==abs(k-arr_y[j])){
count++;
}
else 
count+=2;
}
return count;
}
void solve()
{
    ll n;
    cin>>n;
vector<ld> x(n),y(n);
ld h,k,c1,c2,c3,c4,c5,c6;
rep(i,0,n)
{
cin>>x[i];
}
rep(i,0,n)
{
cin>>y[i];
}
ll mn=INT_MAX;
rep(i,0,n){
    rep(j,0,n){
        //mean_point
        c1=(x[i]+x[j]);
        c2=(y[i]+y[j]);
        h=c1/2;
        k=c2/2;
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        //x & y intersection polls
        h = x[i];
        k = y[j];
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        //x+y=c1 and x-y=c2 intersection polls
        c1=x[i]+y[i];
        c2=x[j]-y[j];
        h = (c1+c2)/2;
        k = (c1-c2)/2;
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        //x+y=c and x intersection
        c3=x[i]+y[i];
        h = x[j];
        k = c3-x[j];
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        //x+y and y intersection
        c4=x[i]+y[i];
        k = y[j];
        h = c4-y[j];
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        //x-y and x
        c5=x[i]-y[i];
        h = x[j];
        k = x[j]-c5;
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        //x-y and y
        c6=x[i]-y[i];
        k = y[j];
        h = c6+y[j];
        mn=mn>check(h,k,x,y,n)?check(h,k,x,y,n):mn;
        }
    }
    cout<<mn<<"\n";
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