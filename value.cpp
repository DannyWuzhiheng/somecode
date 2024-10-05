#include <iostream>
using namespace std;
int c[1001],m[1001],e[1001];
int main()
{
    int n,cnt=0;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        cin>>c[i]>>m[i]>>e[i];
        for (int j = 1;j<i;j++)
        {
            int ok = 0;
            int cd,md,ed;
            for (cd = -5;cd<=5;cd++)
            {
                if(c[j]-cd==c[i])
                {
                    ok++;
                    break;
                }
            }
            for (md = -5;md<=5;md++)
            {
                if(m[j]-md==m[i])
                {
                    ok++;
                    break;
                }
            }
            for (ed = -5;ed<=5;ed++)
            {
                if(e[j]-ed==e[i])
                {
                    ok++;
                    break;
                }
            }
            if(ok == 3&&ed+cd+md<=10)
            {
                cnt++;
            }

        }
    }
    cout<<cnt;
}
