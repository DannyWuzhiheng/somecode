#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 2;i<=n;i++)
    {
        int s = 1,j;
        for (j = 2;j*j<i;j++)
        {
            if(i%j==0){s+=(j+i/j);}
        }
        if (j*j==i){s=s+j;}
        if (s==i){cout<<i<<endl;}
    }
}


