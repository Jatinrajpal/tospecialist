#include<bits/stdc++.h>
#define int long long int

using namespace std;
set<string> tocheck;
bool check(string str1,string str2)
{
    if(str1.compare(str2)==0)
        return true;
    for(int i=0;i<str1.length();i++)
    {
        int z=0,o=0;
        for(int j=i;j<str1.length();j++)
        {
            if(str1[j]=='1')
                o++;
            else
                z++;
            if(o%2==0)
            {
                string temp="";
                for(int t=0;t<i;t++)
                    temp+=str1[t];
                for(int t=j;t>=i;t--)
                    temp+=str1[t];
                for(int t=j+1;t<str1.length();t++)
                    temp+=str1[t];
                // cout<<temp<<"->";
                if(temp.compare(str2)==0)
                {
                    return true;
                }
                else{
                    tocheck.insert(str1);
                    if((tocheck.find(temp)==tocheck.end()) && check(temp,str2))
                        return true;
                }
            }
        }
    }
    return false;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        // if(s[0]=='')
        int i=0,j=n-1,flag=0;
        if(s[i]=='2')
        {
            if(s[i+1]=='0')
            {
                if(s[i+2]=='2')
                {                
                    if(s[i+3]=='0')
                    {
                        flag=1;
                    }
                    else{
                        if(s[j]=='0')
                        {
                            flag=1;
                        }
                    }
                }
                else{
                    if(s[j]=='0' && s[j-1]=='2')
                    {
                        flag=1;
                    }
                }
            }
            else{
                if(s[j]=='0' && s[j-1]=='2' && s[j-2]=='0')
                {
                    flag=1;
                }
            }
        }
        else{
            if(s[j]=='0' && s[j-1]=='2' && s[j-2]=='0' && s[j-3]=='2')
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    
    }
    return 0;
}
