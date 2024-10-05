#include <iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;
    for (int i = a;i<=b;i++)
    {
        int d = 0;
        for (int j=i;j>0;j=j/10)
        {
            d=d*10+j%10;
        }
        if(d==i)
        {
            int ok = 0;
            for (int j = 2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    ok=1;
                }
            }
            if(ok==0)
            {
                cout<<i<<endl;
            }
        }
    }

}
