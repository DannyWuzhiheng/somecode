#include <iostream>

using namespace std;

int main()
{
    int x,y,z,n,m,a,b,c,cnt=0;
    cin>>x>>y>>z>>n>>m;
    for (a = 0;a<m;a++)
    {
        for (b = 0;b<=m;b++)
        {
           for (c=0;c<=m;c=c+z)
           {
               if(a*x+b*y+c/z==n&&a+b+c==m)
               {
                   cnt++;
               }
           }
        }


    }
    cout<<cnt;
}

