#include <iostream>
#include <vector>
#include<algorithm>6 40

using namespace std;

int a[50000];
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int n,hi,h;
    cin>>n>>h;
    for (int i = 0;i<n;i++)
    {
        cin>>hi;
        a[i]=hi;
    }
    sort(a+0,a+n,cmp);
    int cnt=0;
    for (int i = 0;i<n;i++)
    {
        if(cnt>=h){cout<<i;break;}
        cnt+=a[i];
    }

}
