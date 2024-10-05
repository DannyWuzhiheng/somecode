#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    if(b==31)
    {
        if(a==12){x=1;}
        else x=a+1;
        y=1;
    }
    else
    {
        if(b==30)
        {
            if(a==4||a==6||a==9||a==11)
            {
                y=1;x=a+1;
            }
            else {y=b+1;x=a;}
        }
        else
        {
            if(b==28)
            {
                if(a==2){x=3;y=1;}
                else {x=a;y=b+1;}
            }
            else
            {
                x=a;y=b+1;
            }
        }
    }
    cout<<x<<" "<<y;
    
}