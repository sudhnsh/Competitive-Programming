#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
        for(int i=n;i>1;i--)
        {
            ans=(i*(i+1))/2;
            if((ans%2)==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}