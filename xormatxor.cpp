#include <bits/stdc++.h>
#define int long long int
using namespace std;

int LCS(string X, string Y, int m, int n)
{
    int c[m + 1][n + 1];
    int ans = 0; 
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                c[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                ans = max(ans, c[i][j]);
            }
            else
                c[i][j] = 0;
        }
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int a[n+1];
            for(int i=1;i<=n;i++)
            {
                cin>>a[i];
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            int i=1,k=1,cnt=0,v=n-1;
            while(i<n)
            {
                k=i;
                while(a[k]!=i)
                {
                    k++;
                }
                int val=i,val1=k;
                cnt+=(k-i+1);
                while(val<=val1)
                {
                    swap(a[val],a[val1]);
                    val1--;
                    val++;
                }
                i++;
            }
            cout<<cnt<<"\n";
        

        }
    return 0;
}