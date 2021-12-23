#include <bits/stdc++.h>
using namespace std;
#define ll int
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
void printq(queue<ll> q)
{
    if (q.empty())
        return;
    // cout<<'q'<<' ';
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << '\n';
    return;
}
void printst(stack<ll> s)
{
    if (s.empty())
    {
        return;
    }
    // cout<<'s'<<' ';
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << '\n';
    return;
}
void solve()
{
    queue<ll> q;
    stack<ll> s1, s2;
    ll n;
    cin >> n;
    ll ele;
    rep(i, 0, n)
    {
        cin >> ele;
        if (s1.empty() || s1.top() > ele)
        {
            s1.push(ele);
            printq(q);
            printst(s1);
            printst(s2);
        }
        else if (s2.empty() || s2.top() < ele)
        {
            s2.push(ele);
            printq(q);
            printst(s1);
            printst(s2);
        }
        else
        {
            if (ele - s1.top() < s2.top() - ele)
            {
                while (!s1.empty() && s1.top() <= ele)
                {
                    q.push(s1.top());
                    s1.pop();
                }
                s1.push(ele);
                printq(q);
                printst(s1);
                printst(s2);
                while (!q.empty())
                {
                    rep(i, 0, q.size() - 1)
                    {
                        ll h = q.front();
                        q.push(h);
                        q.pop();
                    }
                    s1.push(q.front());
                    q.pop();
                }
            }
            else if (ele - s1.top() > s2.top() - ele)
            {
                while ((!s2.empty()) && s2.top() >= ele)
                {
                    q.push(s2.top());
                    s2.pop();
                }
                s2.push(ele);
                printq(q);
                printst(s1);
                printst(s2);
                while (!q.empty())
                {
                    rep(i, 0, q.size() - 1)
                    {
                        q.push(q.front());
                        q.pop();
                    }
                    s2.push(q.front());
                    q.pop();
                }
            }
        }
    }
    stack<ll> s3;
    while (!s2.empty())
    {
        s3.push(s2.top());
        s2.pop();
    }
    s2 = s3;
    while (!(s1.empty() || s2.empty()))
    {
        ll temp = s1.top() > s2.top() ? s2.top() : s1.top();
        q.push(temp);
        printq(q);
        if (temp == s2.top())
        {
            s2.pop();
        }
        else
        {
            s1.pop();
        }
        printst(s1);
        printst(s2);
    }
    while (!s1.empty())
    {
        q.push(s1.top());
        s1.pop();
        printq(q);
        printst(s1);
        printst(s2);
    }
    while (!s2.empty())
    {
        q.push(s2.top());
        s2.pop();
        printq(q);
        printst(s1);
        printst(s2);
    }
}
int main()
{
    // ffst;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}