#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,a;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        cin>>a;
        int ok=0;
        for (int x = 1;x<a;x++)
        {
            int y = sqrt(a-x*x);
            if(y*y==a-x*x)
            {
                ok=1;
                break;
            }
        }
        if (ok==0){cout<<"No"<<endl;}
        else{cout<<"Yes"<<endl;}
    }



}

