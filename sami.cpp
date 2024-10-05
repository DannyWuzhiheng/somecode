#include <iostream>
using namespace std;
int main() {
    int a,cnt=0,s=0,n;
    cin>>n;
    for (int i = 0;i<n;i++)
    {
        cin>>a;
        if (a%10!=3&&a%3!=0)
        {
            cnt+=1;
            s+=a;
        }
    }
    cout<<s<<" "<<cnt;
}

