    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define rep(i,a,n) for(ll i=a;i<n;i++)
    #define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #define vpair vector<pair<ll,ll> >
    #define m 1000000007
    //by sudhnsh
    ll LongestIncreasingSubsequenceLength(std::vector<ll>& v)
    {
        if (v.size() == 0) 
            return 0;
    
        std::vector<ll> tail(v.size(), 0);
        int length = 1; 
    
        tail[0] = v[0];
    
        for (ll i = 1; i < v.size(); i++) {
            auto b = tail.begin(), e = tail.begin() + length;
            auto it = upper_bound(b, e, v[i]);
            if (it == tail.begin() + length)
                tail[length++] = v[i];
            else
                *it = v[i];
        }
    
        return length;
    }
    void solve()
    {
    
        ll a,b;
        cin>>a>>b;
        vector<ll> v1(a),v2(b); 
        rep(i,0,a)
        {
            cin>>v1[i];
        }
        rep(i,0,b)
        {
            cin>>v2[i];
        }
        cout<<LongestIncreasingSubsequenceLength(v1)+LongestIncreasingSubsequenceLength(v2)<<'\n';
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