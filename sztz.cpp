#include <iostream>
using namespace std;
int main() {
    int L,R,s=0;
    cin>>L>>R;
    for (int i = L;i<=R;i++)
    {
        for (int j = i;j>0;j=j/10){
            if (j%10==2){s++;}
        }
    }
    cout<<s;

}



