#include <iostream>
using namespace std;

int sqr[10][10];

int main()
{
    int n;
    cin>>n;
    int data = 1;
    for (int i = 1;i<=(n+1)/2;i++)
    {
        int a = n-(i-1)*2;
        for (int l = i;l<=i+a-1;l++)
        {
            sqr[i][l] = data;
            data++;
        }
        for (int h = i+1;h<=i+a-1;h++)
        {
            sqr[h][i+a-1] = data;
            data++;
        }
        for (int l = i+a-2;l>=i;l--)
        {
            sqr[i+a-1][l] = data;
            data++;
        }
        for (int h = i+a-2;h>=i+1;h--)
        {
            sqr[h][i] = data;
            data++;
        }
    }
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            if (sqr[i][j]>=10)cout<<" "<<sqr[i][j];
            else cout<<"  "<<sqr[i][j];
        }
        cout<<endl;
    }
}
