#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
        int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        int n=s.length();
        vector<int> ones;
        vector<int> zeros;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
                ones.push_back(i);
            }
            else{
                zeros.push_back(i);
            }
        }
        cnt2=n-cnt1;
        if(n%2!=0)
        {
            cout<<"-1\n";
        }
        else{
            if(cnt1==n/2)
            {
                cout<<"0\n";
            }
            else{
                if(cnt1<n/2)
                {
                    int j=0;
                    while(cnt1<n/2 && j<ones.size())
                    {
                        int id=ones[j++];
                        for(int k=id+1;k<n && s[k]=='0';k++)
                        {
                            s[k]='1';
                            cnt1++;
                            cnt2--;
                        }
                        for(int k=id-1;k>=0 && s[k]=='0';k--)
                        {
                            s[k]='1';
                            cnt1++;
                        }
                        
                    }
                    if(cnt1<n/2){
                            cout<<"-1\n";
                        }
                    else{
                            cout<<((n/2)-ones.size())<<"\n";
                        }
                }
                else{
                    int j=0;
                    while(cnt1>n/2 && j<zeros.size())
                    {
                        int id=zeros[j++];
                        for(int k=id+1;k<n && s[k]=='1';k++)
                        {
                            cnt1--;
                            s[k]='0';
                        }
                        for(int k=id-1;k>=0 && s[k]=='1';k--)
                        {
                            cnt1--;
                            s[k]='0';
                        }

                    }
                    if(cnt1>n/2)
                        {
                            cout<<"-1\n";
                        }
                    else{
                        cout<<(n/2-zeros.size())<<"\n";
                    }
                }
            }
        }
    }
    return 0;


}