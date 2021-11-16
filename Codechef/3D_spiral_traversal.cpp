#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(int i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define mod 1000000007
void solve()
{
    int n,m,l;
    cin>>n>>m>>l;
    int v[n][m][l];
    bool v1[n][m][l];
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            rep(k,0,l)
            {
                cin>>v[i][j][k];
                v1[i][j][k]=true;
            }
        }
    }
    ll i1,j1,k1;
    cin>>i1>>j1>>k1;
    ll nxm=n*m;
    ll nxl=n*l;
    if(k1==0)
    {
        while(k1<l)
        {
            nxm=n*m;
            ll temp=0;
            while(nxm!=0){
            while(nxm!=0&&temp!=nxm)
            {
                temp=nxm;
                if(v1[i1][j1][k1])
                {cout<<v[i1][j1][k1]<<' ';
                v1[i1][j1][k1]=false;
                nxm--;}
                if(nxm==0)
                {
                    break;
                }
                while(i1+1<n&&v1[i1+1][j1][k1])
                {
                    cout<<v[i1+1][j1][k1]<<' ';
                    i1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(j1+1<m&&v1[i1][j1+1][k1])
                {
                    cout<<v[i1][j1+1][k1]<<' ';
                    j1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(i1-1>=0&&v1[i1-1][j1][k1])
                {
                    cout<<v[i1-1][j1][k1]<<' ';
                    i1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(j1-1>=0&&v1[i1][j1-1][k1])
                {
                    cout<<v[i1][j1-1][k1]<<' ';
                    j1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
            }
            bool b=false;
                rep(i,0,n)
                {
                    rep(j,0,m)
                    {
                        if(v1[i][j][k1])
                        {  
                        cout<<v[i][j][k1]<<' ';
                        v1[i][j][k1]=false;
                        i1=i;
                        j1=j;
                        nxm--;
                        b=true;
                        break;
                        }
                    }
                if(b)
                {
                break;
                }
                }
            }
            k1++;
        }
    }
    else if(k1==l-1)
    {
        while(k1>=0)
        {
            nxm=n*m;
            ll temp=0;
            while(nxm!=0){
            while(nxm!=0&&temp!=nxm)
            {
                temp=nxm;
                if(v1[i1][j1][k1])
                {cout<<v[i1][j1][k1]<<' ';
                v1[i1][j1][k1]=false;
                nxm--;}
                if(nxm==0)
                {
                    break;
                }
                while(i1+1<n&&v1[i1+1][j1][k1])
                {
                    cout<<v[i1+1][j1][k1]<<' ';
                    i1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(j1+1<m&&v1[i1][j1+1][k1])
                {
                    cout<<v[i1][j1+1][k1]<<' ';
                    j1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(i1-1>=0&&v1[i1-1][j1][k1])
                {
                    cout<<v[i1-1][j1][k1]<<' ';
                    i1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(j1-1>=0&&v1[i1][j1-1][k1])
                {
                    cout<<v[i1][j1-1][k1]<<' ';
                    j1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
            }
            bool b=false;
                rep(i,0,n)
                {
                    rep(j,0,m)
                    {
                        if(v1[i][j][k1])
                        {  
                        cout<<v[i][j][k1]<<' ';
                        v1[i][j][k1]=false;
                        i1=i;
                        j1=j;
                        nxm--;
                        b=true;
                        break;
                        }
                    }
                if(b)
                {
                break;
                }
                }
        }
            k1--;
        }
    }
    else if(j1==0)
    {
        while(j1<m)
        {
            nxm=n*l;
            ll temp=0;
            while(nxm!=0){
            while(nxm!=0&&temp!=nxm)
            {
                temp=nxm;
                if(v1[i1][j1][k1]){
                cout<<v[i1][j1][k1]<<' ';
                v1[i1][j1][k1]=false;
                nxm--;}
                if(nxm==0)
                {
                    break;
                }
                while(i1+1<n&&v1[i1+1][j1][k1])
                {
                    cout<<v[i1+1][j1][k1]<<' ';
                    i1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(k1+1<m&&v1[i1][j1][k1+1])
                {
                    cout<<v[i1][j1][k1+1]<<' ';
                    k1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(i1-1>=0&&v1[i1-1][j1][k1])
                {
                    cout<<v[i1-1][j1][k1]<<' ';
                    i1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(k1-1>=0&&v1[i1][j1][k1-1])
                {
                    cout<<v[i1][j1][k1-1]<<' ';
                    k1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }

            }
                bool b=false;
                rep(i,0,n)
                {
                    rep(k,0,l)
                    {
                        if(v1[i][j1][k])
                        {  
                        cout<<v[i][j1][k]<<' ';
                        v1[i][j1][k]=false;
                        i1=i;
                        k1=k;
                        nxm--;
                        b=true;
                        break;
                        }
                    }
                if(b)
                {
                break;
                }
                }
            }
            j1++;
        }
    }
    else if(j1==m-1)
    {
        while(j1>=0)
        {
            nxm=n*l;
            ll temp=0;
            while(nxm!=0)
            {
                while(nxm!=0&&temp!=nxm)
                {
                temp=nxm;
                if(v1[i1][j1][k1]){
                cout<<v[i1][j1][k1]<<' ';
                v1[i1][j1][k1]=false;
                nxm--;}
                if(nxm==0)
                {
                    break;
                }
                while(i1+1<n&&v1[i1+1][j1][k1])
                {
                    cout<<v[i1+1][j1][k1]<<' ';
                    i1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(k1+1<m&&v1[i1][j1][k1+1])
                {
                    cout<<v[i1][j1][k1+1]<<' ';
                    k1++;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(i1-1>=0&&v1[i1-1][j1][k1])
                {
                    cout<<v[i1-1][j1][k1]<<' ';
                    i1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }
                while(k1-1>=0&&v1[i1][j1][k1-1])
                {
                    cout<<v[i1][j1][k1-1]<<' ';
                    k1--;
                    v1[i1][j1][k1]=false;
                    nxm--;
                }
                if(nxm==0)
                {
                    break;
                }

                }
                bool b=false;
                rep(i,0,n)
                {
                    rep(k,0,l)
                    {
                        if(v1[i][j1][k])
                        {  
                        cout<<v[i][j1][k]<<' ';
                        v1[i][j1][k]=false;
                        i1=i;
                        k1=k;
                        nxm--;
                        b=true;
                        break;
                        }
                    }
                if(b)
                {
                break;
                }
            }
        }
            j1--;
        }
    }
   

}
int main()
{ 
ffst;
ll t=1;
//cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}