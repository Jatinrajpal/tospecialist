#include<bits/stdc++.h>
using namespace std;
#define ff              first
#define ss              second
#define int             long long  int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define vv(type)        vector<vector<type>>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define db(x)             cout<<x<<" "
#define db1(x)             cout<<x<<"\n"
#define db2(x,y)         cout<<x<<" "<<y<<"\n"
#define db3(x,y,z)         cout<<x<<" "<<y<<" "<<z<<"\n"
#define rep(i,n)         for(int i=0;i<(n);++i)
#define repA(i,a,n)     for(int i=a;i<=(n);++i)
#define repD(i,a,n)     for(int i=a;i>=(n);--i)
#define so(a)             sort(a.begin(),a.end())
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
// to find all local maximaa and minima in O(n)
    // for (int i=1;i<=n;i++)
    //    {
    //        if (i==1 || i==n || (p[i-1]<p[i])!=(p[i]<p[i+1]))
    //       ans.push_back(p[i]);
    //    }
int dx[] = { -1, 1, -1, 0, 0, -1, 1, 1 };
int dy[] = { -1, -1, 1, -1, 1, 0, 0, 1 };
int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}
int modular_expo(int x, int y, int m)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
            ans = (ans % m * x % m) % m;
        x = (x % m * x % m) % m;
        y /= 2;
    }
    return ans % m ;
}
int power(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
            ans = (ans * x);
        x *= x;
        y /= 2;
    }
    return ans;
}
void solve()
{

    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
}
int primeFactors(int n) 
{   
    int cnt=1;
    while (n%2 == 0) 
    { 
        printf("%d ", 2);
        cnt++; 
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i+=2) 
    { 
        while (n%i == 0) 
        { 
            cnt++;
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
  
    if (n > 2) 
        cnt++;
    return cnt;
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
bool prime[100001];     
vector<int> values;
set<int> s; 
// int n=1000001;
void SieveOfEratosthenes(int n) 
{ 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=1000001; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=1000001; p++) 
       if (prime[p]) 
       {
        s.insert(p);
            // cout<<p<<" ";
          // values.push_back(p); 
       }
} 
int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
        int n;
    // int n,cnt1=0,ans=0,flag=0,sum=0,cnt2=0;
    cin>>n;
    int a[n];
    double a1[n]={0};
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a1[i]=a[i];
        // cout<<a1[i]<<" ";
        sum+=a1[i];
    }
    sum=sum;
    sum=sum/n;
    printf("%.12lf\n",sum);
    // cout<<sum<<"\n";
    return 0;
}
