#include <iostream>
using namespace std;
int hf[40][40];
int main()
{
    int n;
    cin>>n;
    hf[1][(int)n/2+1] = 1;
    int x = 1;
    int y = (int)n/2+1;
    for (int i = 2;i<=n*n;i++)
    {
        if(x==1&&y!=n)
        {
            hf[n][y+1] = i;
            x=n;
            y++;
        }
        else if (y==n&&x!=1)
        {
            hf[x-1][1] = i;
            x--;
            y=1;
        }
        else if (x==1&&y==n)
        {
            hf[x+1][n] = i;
            x++;
            y=n;
        }
        else if (x!=1&&y!=n)
        {
            if(hf[x-1][y+1]==0)
            {
                 hf[x-1][y+1] = i;
                 x--;
                 y++;
            }
            else
            {
                hf[x+1][y] = i;
                x++;
            }
        }
    }
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            cout<<hf[i][j]<<" ";
        }
        cout<<endl;

    }

}

