#include <iostream>
#include <string>
using namespace std;

int sqr[200][200];

int main()
{
    int n;
    cin>>n;
    int a;
    int zo = 0;
    int x=1,y=1;
    for (int s = 0;s!=n*n;s=s+a)
    {
        cin>>a;
        for (int i = 1;i<=a;i++)
        {
            sqr[x][y] = zo;
            if(x==n){y++;x=0;}
            x++;
        }
        if(zo == 0)zo = 1;
        else zo = 0;

    }
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            cout<<sqr[j][i];

        }
        cout<<endl;
    }
}

