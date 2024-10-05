#include <iostream>
using namespace std;
int c[10][10],n,m,sml[10];
int main()
{
    cin>>n>>m;
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    for (int i = 0;i<n;i++)
    {
        int mn = c[i][0];
        for (int j = 1;j<m;j++)
        {
            if(mn>c[i][j]){mn=c[i][j];}
        }
        sml[i]=mn;
    }
    int mx = sml[0];
    for (int i = 0;i<n;i++)
    {
        if(sml[i]>mx)
        {
            mx=sml[i];
        }
    }
    cout<<mx;
}
