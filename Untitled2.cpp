#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b&&a>c){
        if (a>b+c){
            cout<<a<<" "<<b+c;
        }
        else{
            cout<<b+c<<" "<<a;
        }
    }
    else if (c>b&&c>a){
        if (c>a+b){
            cout<<c<<" "<<b+a;
        }
        else{
            cout<<b+a<<" "<<c;
        }
    }
    else{
        if (b>a+c){
            cout<<b<<" "<<c+a;
        }
        else if (a>b){
            cout<<b+c<<" "<<a;
        }
        else{
            cout<<a+c<<" "<<;
        }
    }
    }

}
