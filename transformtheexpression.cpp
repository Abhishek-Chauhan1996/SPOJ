#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	int k=s.length(),i;
	stack<char>st;
	for (i=0;i<k;i++)
	{
		if(s[i]=='(')
			continue;
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
		st.push(s[i]);
		else if(s[i]==')')
		{
			cout<<st.top();
			st.pop();
		}
		else
		cout<<s[i];
		
	}
	cout<<endl;
	}
	return 0;
}
