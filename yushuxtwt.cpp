#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    if (b<c){
        int tmp=c;
        c=b;
        b=tmp;
    }
    for (int i = 2;i<=c;i++)
    {
        if (a%i==b%i&&b%i==c%i)
        {
            cout<<i;
            break;
        }
    }

}


