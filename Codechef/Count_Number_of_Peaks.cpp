#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    ll count=0;
    if(n==1||n==2)
    {
        cout<<0<<'\n';
    }
    else if(n==3)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    
                        ll arr[] = {i1, i2, i3};
                        vector<ll> vv(arr, arr + n);
                        rep(i, 1, n - 1)
                        {
                            if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                            {
                                count++;
                            }
                            else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                            {
                                count++;
                            }
                        }
                    
                }
            }
        }
        cout<<count<<'\n';
    }
    else if(n==4)
    {
        rep(i1,0,3)
        {
            rep(i2,0,3)
            {
                rep(i3,0,3)
                {
                    rep(i4,0,3)
                    {
                        ll arr[]={i1,i2,i3,i4};
                        vector<ll> vv(arr,arr+n);
                        rep(i,1,n-1)
                        {
                            if(vv[i-1]>vv[i]&&vv[i+1]>vv[i])
                            {
                                count++;
                            }
                            else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                            {
                                count++;
                            }
                        }
                        
                    }
                }
            }
        }
        cout<<count<<'\n';
    }
    else if(n==5)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    rep(i4, 0, 3)
                    {
                        rep(i5,0,3){
                        ll arr[] = {i1, i2, i3, i4,i5};
                        vector<ll> vv(arr, arr + n);
                        rep(i, 1, n - 1)
                        {
                            if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                            {
                                count++;
                            }
                            else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                            {
                                count++;
                            }
                        }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
    else if(n==6)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    rep(i4, 0, 3)
                    {
                        rep(i5, 0, 3)
                        {
                            rep(i6,0,3)
                            {
                            ll arr[] = {i1, i2, i3, i4, i5,i6};
                            vector<ll> vv(arr, arr + n);
                            rep(i, 1, n - 1)
                            {
                                if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                                {
                                    count++;
                                }
                                else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                                {
                                    count++;
                                }
                            }
                            }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
    else if( n==7)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    rep(i4, 0, 3)
                    {
                        rep(i5, 0, 3)
                        {
                            rep(i6, 0, 3)
                            {
                                rep(i7,0,3){
                                ll arr[] = {i1, i2, i3, i4, i5, i6,i7};
                                vector<ll> vv(arr, arr + n);
                                rep(i, 1, n - 1)
                                {
                                    if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                                    {
                                        count++;
                                    }
                                    else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                                    {
                                        count++;
                                    }
                                }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
    else if(n==8)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    rep(i4, 0, 3)
                    {
                        rep(i5, 0, 3)
                        {
                            rep(i6, 0, 3)
                            {
                                rep(i7, 0, 3)
                                {
                                    rep(i8,0,3){
                                    ll arr[] = {i1, i2, i3, i4, i5, i6, i7,i8};
                                    vector<ll> vv(arr, arr + n);
                                    rep(i, 1, n - 1)
                                    {
                                        if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                                        {
                                            count++;
                                        }
                                        else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                                        {
                                            count++;
                                        }
                                    }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
    else if( n==9)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    rep(i4, 0, 3)
                    {
                        rep(i5, 0, 3)
                        {
                            rep(i6, 0, 3)
                            {
                                rep(i7, 0, 3)
                                {
                                    rep(i8, 0, 3)
                                    {
                                        rep(i9,0,3){
                                        ll arr[] = {i1, i2, i3, i4, i5, i6, i7,i8,i9};
                                        vector<ll> vv(arr, arr + n);
                                        rep(i, 1, n - 1)
                                        {
                                            if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                                            {
                                                count++;
                                            }
                                            else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                                            {
                                                count++;
                                            }
                                        }
                                    }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
    else if(n==10)
    {
        rep(i1, 0, 3)
        {
            rep(i2, 0, 3)
            {
                rep(i3, 0, 3)
                {
                    rep(i4, 0, 3)
                    {
                        rep(i5, 0, 3)
                        {
                            rep(i6, 0, 3)
                            {
                                rep(i7, 0, 3)
                                {
                                    rep(i8, 0, 3)
                                    {
                                        rep(i9, 0, 3)
                                        {
                                            rep(i10,0,3){
                                            ll arr[] = {i1, i2, i3, i4, i5, i6, i7,i8,i9,i10};
                                            vector<ll> vv(arr, arr + n);
                                            rep(i, 1, n - 1)
                                            {
                                                if (vv[i - 1] > vv[i] && vv[i + 1] > vv[i])
                                                {
                                                    count++;
                                                }
                                                else if (vv[i - 1] < vv[i] && vv[i + 1] < vv[i])
                                                {
                                                    count++;
                                                }
                                            }
                                        }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << count << '\n';
    }
}
int main()
{
    // ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}