#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<0)
    {
        cout<<1<<endl;
    }
    else
    {
        if (x<=5&&x<=7)
        {
            cout<<2<<endl;
        }
        else
        {
            if (10<x&&x<16)
            {
                cout<<3<<endl;
            }
            else
            {
                if (x==30)
                {
                    cout<<4<<endl;
                }
            }
        }


    }
}
