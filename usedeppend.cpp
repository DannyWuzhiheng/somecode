#include <iostream>
using namespace std;
int main() {
    int a,b,c,g;
    cin>>a>>b>>c;
    for (;b>0;)
    {
        int t=a;
        a=b;
        b=t%b;
    }
    for (;c>0;)
    {
        int t=a;
        a=c;
        c=t%c;
    }
    cout<<a;

}
