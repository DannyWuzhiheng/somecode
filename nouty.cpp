#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if (x<y+z&&z<x+y&&y<x+z){
        if (x*x+y*y==z*z){
            cout<<"Right triangle"<<endl;
        }
        if (x*x+y*y>z*z){
            cout<<"Acute triangle"<<endl;
        }
        if (x*x+y*y<z*z){
            cout<<"Obtuse triangle"<<endl;
        }
        if (x==y||x==z||y==z){
            cout<<"Isosceles triangle"<<endl;
        }
        if (x==y&&y==z){
            cout<<"Equilateral triangle"<<endl;
        }
    }
    else{
        cout<<"Not triangle"<<endl;
    }
}
