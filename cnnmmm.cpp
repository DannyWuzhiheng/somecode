#include <iostream>  
using namespace std;  
  
int main() 
{  
    int a;
    cin>>a;
    int mx=0,mn=9;
    for (int i = a;i>0;i=i/10)
    {
        int g=i%10;
        if(mn>g){mn=g;}
        if(mx<g){mx=g;}
    }
    cout<<mx+mn;
  	
}