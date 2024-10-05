#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int j = 1;
    for (int i = n;i>0;i--)
    {

        for (int d = 1;d<=n;d++)
        {
            if(j%10==j){cout<<0<<j;}
            else{cout<<j;}
            j++;
        }
        cout<<endl;
    }
    cout<<endl;
    j = 1;
    for (int i = 1;i<=n;i++)
    {
        for (int f = 1;f<n-i+n-i+1;f++)
        {
            cout<<" ";
        }
        for (int d = 1;d<=i;d++)
        {
            if(j%10==j){cout<<0<<j;}
            else{cout<<j;}
            j++;
        }
        cout<<endl;
    }
}

