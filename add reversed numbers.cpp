#include <iostream>
using namespace std;

int main() {
	int t,x,y,r,s1=0,s2=0,s3=0;
	cin>>t;
	while(t--)
	{
		s1=0,s2=0,s3=0;
		cin>>x>>y;
		while(x>0)
		{
			r=x%10;
			x=x/10;
			s1=s1*10+r;
		}
		while(y>0)
		{
			r=y%10;
			y=y/10;
			s2=s2*10+r;
		}
		x=s1+s2;
		while(x>0)
		{
			r=x%10;
			x=x/10;
			s3=s3*10+r;
		}
		cout<<s3<<endl;
	}
	return 0;
}
