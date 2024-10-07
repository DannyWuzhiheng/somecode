#include <iostream>
#include <algorithm>
using namespace std;

struct hl
{
    int pos,cnt;
};

bool cmp(hl a,hl b)
{
    if(a.cnt>b.cnt)return 1;
    else if(a.pos<b.pos&&a.cnt==b.cnt)return 1;
    else return 0;
}
bool post(hl a,hl b)
{
    return a.pos<b.pos;
}
hl hang[1001],lie[1001];
int tongL[1001],tongH[1001];

int main()
{
    freopen("")
    int M,N,K,L,D;
    cin>>M>>N>>K>>L>>D;
    for (int i = 1;i<=D;i++)
    {
        int x,y,q,w;
        cin>>x>>y>>q>>w;
        if(x==q)
        {
            if(x>q)
            {
                tongL[q]++;
            }
            else
            {
                tongL[x]++;
            }
        }
        else
        {
            if(y>w)
            {
                tongH[w]++;
            }
            else
            {
                tongH[y]++;
            }
        }
    }
    for (int i = 1; i < M; i++)hang[i]={i,tongH[i]};
    for (int i = 1; i < N; i++)lie[i]={i,tongL[i]};
    sort(hang+1,hang+M,cmp);
    sort(lie+1,lie+N,cmp);

    sort(hang+1,hang+K+1,cmp);
    sort(lie+1,lie+L+1,cmp);
    for (int i = 1; i <= K; i++)cout<<hang[i].pos<<" ";
    cout<<endl;
    for (int i = 1; i <= L; i++)cout<<lie[i].pos<<" ";
}
