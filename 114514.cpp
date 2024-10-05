#include <iostream>
using namespace std;
int main(){
    int a,s=0;
    cin>>a;
    s+=a%10;
    a=a/10;
    s+=a%10;
    a=a/10;
    s+=a%10;
    a=a/10;
    s+=a%10;
    a=a/10;
    s+=a%10;
    cout<<s<<endl;
}
