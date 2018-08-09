#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int x,y=1,i,j=0,z=5;
    cin>>x;
    i=1;
    while(y)
    {
        if(x>=z)
        {
            j=j+x/z;
            z=z*5;
            i++;
        }
        else
        {
            y=0;
        }
    }
    cout<<j<<endl;
    }

return 0;
}
