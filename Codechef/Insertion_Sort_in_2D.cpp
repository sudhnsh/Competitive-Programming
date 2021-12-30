#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
struct posi{
    ll pos;
    ll x;
    ll y;
};
void solve()
{
    ll n;
    cin>>n;
    ll mat[n][n];
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            cin>>mat[i][j];
        }
    }
   
    if(n<=7)
    {
        vector<posi> la, la1,la2;
        posi ele;
        vector<ll> v, v1,v2;
        ll i1 = 0, j1 = 0;
        while (true)
        {
            if (j1 == 0 && i1 < n - 1)
            {
                v.push_back(mat[i1][j1]);
                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la.push_back(ele);
                i1++;
            }
            else if (i1 == n - 1 && j1 < n - 1)
            {
                v.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la.push_back(ele);
                j1++;
            }
            else if (j1 == n - 1 && i1 > 0)
            {
                v.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la.push_back(ele);
                i1--;
            }
            else if (i1 == 0 && j1 > 0)
            {
                v.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la.push_back(ele);
                j1--;
            }
            if (i1 == 0 && j1 == 0)
                break;
        }
        i1 = 1;
        j1 = 1;
        while (true)
        {
            if (j1 == 1 && i1 < n - 2)
            {
                v1.push_back(mat[i1][j1]);
                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la1.push_back(ele);
                i1++;
            }
            else if (i1 == n - 2 && j1 < n - 2)
            {
                v1.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la1.push_back(ele);
                j1++;
            }
            else if (j1 == n - 2 && i1 > 1)
            {
                v1.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la1.push_back(ele);
                i1--;
            }
            else if (i1 == 1 && j1 > 1)
            {
                v1.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la1.push_back(ele);
                j1--;
            }
            if (i1 == 1 && j1 == 1)
                break;
        }
        i1 = 2;
        j1 = 2;
        while (true)
        {
            if (j1 == 2 && i1 < n - 3)
            {
                v2.push_back(mat[i1][j1]);
                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la2.push_back(ele);
                i1++;
            }
            else if (i1 == n - 3 && j1 < n - 3)
            {
                v2.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la2.push_back(ele);
                j1++;
            }
            else if (j1 == n - 3 && i1 > 2)
            {
                v2.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la2.push_back(ele);
                i1--;
            }
            else if (i1 == 2 && j1 > 2)
            {
                v2.push_back(mat[i1][j1]);

                ele.pos = v.size();
                ele.x = i1;
                ele.y = j1;
                la2.push_back(ele);
                j1--;
            }
            if (i1 == 2 && j1 == 2)
                break;
        }
        ll temp = v.size() / 2;
        ll temp2 = v1.size() / 2;
        ll temp3= v2.size()/2;
        rep(i, 2, temp + 1)
        {
            sort(v.begin(), v.begin() + i);
            sort(v.begin() + temp, v.begin() + temp + i);
            if (i < temp2 + 1)
            {
                sort(v1.begin(), v1.begin() + i);
                sort(v1.begin() + temp2, v1.begin() + i + temp2);
            }
            if(i<temp3+1)
            {
                sort(v2.begin(), v2.begin() + i);
                sort(v2.begin() + temp3, v2.begin() + i + temp3);
            }
            rep(j, 0, la.size())
            {
                mat[la[j].x][la[j].y] = v[j];
                //  cout<<v[j]<<' ';
            }
            rep(j, 0, la1.size())
            {
                mat[la1[j].x][la1[j].y] = v1[j];
            }
            rep(j, 0, la2.size())
            {
                mat[la2[j].x][la2[j].y] = v2[j];
            }
            // cout<<'\n';
            rep(j, 0, n)
            {
                rep(k, 0, n)
                {
                    cout << mat[j][k] << ' ';
                }
            }
            cout << '\n';
        }
        ll j2 = temp2 + 1;
        ll j3=temp3+1;
        rep(i, temp + 1, v.size() + 1)
        {
            sort(v.begin(), v.begin() + i);
            if (v1.size() + 1 > j2)
            {
                sort(v1.begin(), v1.begin() + j2);
                j2++;
            }
            if (v2.size() + 1 > j3)
            {
                sort(v2.begin(), v2.begin() + j3);
                j3++;
            }
            rep(j, 0, la.size())
            {
                mat[la[j].x][la[j].y] = v[j];
                //  cout<<v[j]<<' ';
            }
            rep(j, 0, la1.size())
            {
                mat[la1[j].x][la1[j].y] = v1[j];
                //  cout<<v[j]<<' ';
            }
            rep(j, 0, la2.size())
            {
                mat[la2[j].x][la2[j].y] = v2[j];
                //  cout<<v[j]<<' ';
            }
            // cout<<'\n';
            rep(j, 0, n)
            {
                rep(k, 0, n)
                {
                    cout << mat[j][k] << ' ';
                }
            }
            cout << '\n';
        }
    }  
}
int main()
{
    ffst;
    ll t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}