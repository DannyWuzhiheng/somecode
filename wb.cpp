#include <iostream>

using namespace std;

int main() 
{
    int a,b,s=0,cnt,cha=2147483648;
    cin>>a>>b;
    cnt = 1+a;
    for (int i = 2;i<a;i++)
    {
        if(a%i == 0){cnt+=i;}
    }
    int mn = 2147483648;
    if(cnt == 1+a)
    {
        cnt = 1+b;
        for (int i = 2;i<a;i++)
        {
        if(a%i == 0){cnt+=i;}
        }
        
        for (int i = 1;;i++)
        {
            if(cha>i*i)
            {
                if(cha>a-i*i){mn=i*i;cha=a-i*i;}
            }
            else
            {
                if(cha>i*i-a){mn=i*i;cha=i*i-a;}
                break;
            }
        }
    }
    else
    {
        for (int i = 1;;i++)
        {
            if(cha>i*i)
            {
                if(cha>b-i*i){mn=i*i;cha=b-i*i;}
            }
            else
            {
                if(cha>i*i-b){mn=i*i;cha=i*i-b;}
                break;
            }
        }
    }
    s=cnt*mn;
    cout<<s;
}
