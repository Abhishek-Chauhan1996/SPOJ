#include<bits/stdc++.h>
using namespace std;
#define max 100001
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int x,y,i,j;
    cin>>x>>y;
    for(i=x;i<=y;i++)
    {
        if(i==1)
            continue;
        bool prime =true;
        for(j=2;j<=sqrt(i);j++)
        {

            if(i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
            cout<<i<<endl;
    }
}
return 0;
}
