#include <iostream>
using namespace std;
int main(){
    int cnt=0,s = 0;
    int L;
    cin>>L;
    for (int i = 2;s<L;i++)
    {
        int ok = 1;
        for (int j = 2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                ok=0;
            }
        }
        if(1==ok)
        {
            cout<<i<<endl;
            s+=i;
            cnt+=1;
        }
    }
    cout<<cnt;
}

