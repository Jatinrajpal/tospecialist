#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        if(m<n-1 || m>((n*(n-1))/2))
        {
            cout<<"Case #"<<i<<": IMPOSSIBLE"<<"\n";            
        }
        else
        {
            cout<<"Case #"<<i<<": ";            
            if(m==n-1)
            {
                for(int j=1;j<=n;j++)
                {
                    cout<<j<<" ";
                }
            }
            // else{
                
            // }
        }
    }
}