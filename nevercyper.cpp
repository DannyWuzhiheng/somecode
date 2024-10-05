#include <iostream>

using namespace std;

int main()
{
    int n,x,cnt=0;
    cin>>n>>x;

    for (int i = 1;i<=n;i++)
    {
        for (int j = i;j>0;j=j/10)
        {
            if(j%10==x){cnt++;}
        }
    }
    cout<<cnt;

}
