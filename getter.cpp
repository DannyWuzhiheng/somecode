#include <iostream>
#include <string>
#include <array>
using namespace std;
array<int,5> cmy;
int main(){
for (int i = 0;5>i;i++){
    cin>>cmy[i];
}
for (int i = 0;5>i;i++){
    cmy[i] = cmy[i]+1;
}
for(int i:cmy){
    cout<<i<<endl;
}
}