#include <iostream>
using namespace std;
int n,shuzi[1000],cnt=0;
int main() {
    cin>>n;
    for (int i = n;i>1;cnt++)
    {
        if(i%2!=0)
        {
            i=i*3+1;
            shuzi[cnt]=i;

        }
        else
        {
            i=i/2;
            shuzi[cnt]=i;
        }
    }
    for (int i = cnt-1;i>=0;i--)
    {
        cout<<shuzi[i]<<" ";
    }
    cout<<n;
}
