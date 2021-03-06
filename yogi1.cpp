#include <bits/stdc++.h>
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

int main() {
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
            int n,m,k;
            cin>>n>>m>>k;
            int a[n][m];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            cout<<(a[0][0]+k)^(a[n-1][m-1]+k)<<"\n";

        }
    return 0;
}