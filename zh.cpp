#include <iostream>
using namespace std;
int main(){
    int a;
    int ok=1;
    cin>>a;
    for (int i = 2;i*i<=a;i++)
    {
        if (a%i==0)
        {
            ok=0;
            break;
        }
    }
    if(ok==1){cout<<"zhishu";}
    else{cout<<"heshu";}
}
