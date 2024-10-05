#include <iostream>
#include <vector>
using namespace std;

vector<int> price;
vector<int> t;
vector<int> type;

int main(){
    int n;
    cin>>n;
    for (int i = 0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        type.push_back(x);
        price.push_back(y);
        t.push_back(z);
    }
    int cnt = 0;
    for (int i = 0;i<n;i++)
    {
        cnt+=price[i];
        if(type[i]==1)
        {
            for (int j = 0;j<i;j++)
            {
                if(type[j]==0&&price[j]>=price[i]&&t[i]-t[j]<=45)
                {
                    price[j]=-2147483648;
                    cnt-=price[i];
                    break;
                }
            }
        }
        
    }
    cout<<cnt;
}