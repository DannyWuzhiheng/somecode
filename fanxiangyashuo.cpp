#include <iostream>
using namespace std;

string s,x;
int main()
{
    cin>>s;
    int len_n = s.size();
    for (int i = 1;i<len_n;i++)
    {
        cin>>x;
        s+=x;
    }
    cout<<len_n<<" ";
    int len = s.size();
    int scnt = 0;
    for (int i = 0;;)
    {
        int cnt = 0;
        for (;s[i]=='0'&&i<=len;){cnt++;i++;}
        cout<<cnt<<" ";
        scnt+=cnt;
        cnt = 0;
        for (;s[i]=='1'&&i<=len;){cnt++;i++;}
        cout<<cnt<<" ";
        scnt+=cnt;
        if(scnt == len_n*len_n)break;
    }
}

