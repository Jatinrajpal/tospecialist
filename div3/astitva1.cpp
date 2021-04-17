#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>1000000)
	{
		cout<<"Wrong Input\n";
	}
	else{
		string s=to_string(n);
		for(int i=0;i<s.length();i++)
		{
			cout<<((9-(s[i]-'0')));
		}
	}
}