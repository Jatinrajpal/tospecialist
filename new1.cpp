#include<bits/stdc++.h>
using namespace std;
int a[500][500]={0};
void solve()
{

    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
}

int check(int n){
    int l=1,h=n,res=h;
    while(l<=h){
        int mid=(l+h)/2;
        int total=((mid)*(mid+1))/2;
        if(total>=n){
            res=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return res;
}
bool ok(int x,int y,int n,int m)
{
    int i=x,j=y;
    set<int> s;
    while(i<n && j<m)
    {
        s.insert(a[i++][j++]);
    }
    i=x-1,j=y-1;
    while(i>=0 && j>=0)
    {
        s.insert(a[i--][j--]);
    }
    return s.size()==1;
}
int32_t main()
{
    // solve();
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
            int n,m;
            cin>>n>>m;
            // int a[n][m];
            a[500][500]={0};
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            // map<int,int> mp;
            int i=0,j=0,cnt=0,d=0;
            while(j<m)
            {
                int p=0;
                int q=j;
                j++;
                d++;
                set<int> s;
                while(p<n && q<m){
                    s.insert(a[p++][q++]);
                }
                if(s.size()==1)
                    cnt++;
            }
            i=1,j=0;
            while(i<n)
            {
                int p=i;
                int q=0;
                i++;
                d++;
                set<int> s;
                while(p<n && q<m)
                {
                    s.insert(a[p++][q++]);
                }
                if(s.size()==1)
                    cnt++;
            }
            int q;
            cin>>q;
            while(q--)
            {

                // bool flag=false;
                int x,y,k;
                cin>>x>>y>>k;
                bool flag=ok(x,y,n,m);
                if(flag)
                    cnt--;
                a[x-1][y-1]=k;
                flag=ok(x,y,n,m);
                if(flag)
                    cnt++;
                cnt==d?cout<<"Yes\n":cout<<"No\n";
            }
        }
    return 0;
}
