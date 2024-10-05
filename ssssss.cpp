#include<iostream>
using namespace std;
int main()
{
    int a,m;
    cin>>a;
    m=a;
    cin>>a;
    if (a > m){
        m=a;
    }
    cin>>a;
    if (a > m){
        m=a;
    }
    cout<<m;

}
