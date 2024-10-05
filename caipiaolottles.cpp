#include <iostream>
using namespace std;
int n,tong[34],qu[8],jiang[8];
int main() {
    cin>>n;
    for (int i = 1;i<=33;i++)
    {
        tong[i]=0;
    }
    for (int i = 1;i<=7;i++)
    {
           int a;
           cin>>a;
           tong[a]=1;

    }
    for (int i = 1;i<=n;i++)
    {
        int cnt = 0;
        for (int j = 1;j<=7;j++)
        {
            int a;
            cin>>a;
            if(tong[a]==1)
            {
               cnt++;
            }

        }
        jiang[cnt]++;
    }
    for (int i = 7;i>0;i--)
    {
        cout<<jiang[i];
    }
}
