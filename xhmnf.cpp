#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = n;i!=1;)
    {
        if(i%2!=0)
        {
            cout<<i<<"*3+1";
            i=i*3+1;
            cout<<"="<<i<<endl;
        }
        else
        {
            cout<<i<<"/2";
            i=i/2;
            cout<<"="<<i<<endl;
        }
    }
}
