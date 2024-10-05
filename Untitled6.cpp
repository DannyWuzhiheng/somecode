#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,h;
    cin>>a>>b>>c>>d>>e;
    h=a+b+c+d+e;

    a-=a%3;
    a-=a/3*2;
    b+=a/3;
    e+=a/3;

    b-=b%3;
    b-=b/3*2;
    a+=b/3;
    c+=b/3;

    c-=c%3;
    c-=c/3*2;
    b+=c/3;
    d+=c/3;

    d-=d%3;
    d-=d/3*2;
    c+=d/3;
    e+=d/3;

    e-=e%3;
    e-=e/3*2;
    a+=e/3;
    d+=e/3;

    f=h-a-b-c-d-e;

    cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
    cout<<f;

}
