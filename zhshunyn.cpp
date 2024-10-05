#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        int a;
        cin>>a;
        int ok = 0;
        for (int j = 2;j*j<=a;j++)
        {

            if(a%j==0)
            {
                ok=1;
            }

        }
        if (0 == ok){cout<<a<<" ";}
    }
}
