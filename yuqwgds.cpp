#include <iostream>
using namespace std;
int main() {
    int s=0,n;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        int ok = 0;
        if (i%10==7){ok=1;}
        if(i%7==0){ok=1;}
        if (i/10%10==7){ok=1;}
        if (ok == 0){s=s+(i*i);}
    }
    cout<<s<<endl;
}

