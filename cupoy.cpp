#include <iostream>
using namespace std;
int main(){
    int n,m,k,a,c,ans;
    cin>>m>>n>>k;
    if (m>2*n){
        a=n;
    }
    if (2*n>=m){
        a=m/2;
    }
    c=n+m-3*a;
    if (c>=k){
        ans=a;
    }
    else{
        ans=a-((k-c)+3-1)/3;
    }
    cout<<ans;

}
