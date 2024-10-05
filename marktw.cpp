#include <iostream>
using namespace std;
int main(){
    int n,a,mx=-2147483648;
    cin>>n;
    for (int i = 0;i<n;i++)
    {
        cin>>a;
        if(a>mx){mx=a;}
    }
    cout<<mx;
}
