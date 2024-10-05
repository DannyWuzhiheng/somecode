#include <iostream>
using namespace std;
int n,r[10001],a,cnt;
int main() {
    cin>>n;
    for (int i = 0;i<=n;i++)
    {
        r[i]=1;
    }
    cin>>a;
    for (int i = 1;i<=a;i++)
    {
        int u,v;
        cin>>u>>v;
        for (int j = u;j<=v;j++)
        {
            r[j]=0;
        }
    }
    for (int i = 0;i<=n;i++)
    {
        cnt+=r[i];
    }
    cout<<cnt;
}
