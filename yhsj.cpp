#include <iostream>
using namespace std;
int yhsj[20][20];
int main()
{
    int n;
    cin>>n;
    for (int i = 0;i<=n;i++)
    {
        yhsj[i][0]=1;
        for (int j = 1;j<i;j++)
        {
            yhsj[i][j]=yhsj[i-1][j]+yhsj[i-1][j-1];
        }
    }
    for (int i = 1;i<=n;i++)
    {
        for (int j = 0;j<i;j++)
        {
            cout<<yhsj[i][j]<<" ";
        }
        cout<<endl;
    }


}
