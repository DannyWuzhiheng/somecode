#include <iostream>
using namespace std;
int a[100],n,i;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        int cnt = 0;
        cin>>a[i];
        for(int j = i-1;j>=0;j--)
        {
            if(a[i]>a[j])
            {
                cnt++;
            }
        }
        cout<<cnt<<" ";

    }

}


