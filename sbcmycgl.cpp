#include <iostream>
using namespace std;
int a[100],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];}
    int p=1;
    for(int i=2;i<=n;i++)
    {

        if(a[i]<a[p]){p=i;}
    }
    int q=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>a[q]){q=i;}
    }
    int tmp=a[p];
    a[p]=a[q];
    a[q]=tmp;
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}

