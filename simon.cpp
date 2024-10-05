#include <iostream>
using namespace std;
int main() {
    int k,cnt=0,n;
    cin>>n;
    cin>>k;
    for (int i = 1;i<=n;i++)
    {
        int g = i%10;
        if (g==k)
        {
            cnt++;
        }
        int s = i/10%10;
        if (s==k)
        {
            cnt++;
        }
        int b = i/100%10;
        if (b==k)
        {
            cnt++;
        }
        int q = i/1000%10;
        if (q==k)
        {
            cnt++;
        }

    }
    cout<<cnt<<endl;
}


