#include <iostream>
using namespace std;
int main()
{
	int m,n,c,d;
	cin>>m>>n;
	if(m<n)
	{
		int b;
		n=b;
		n=m;
		m=b;
	}
	d=m*n;
	while(m%n!=0)
	{
		c=m%n;
		m=n;
		n=c;
	
	}
	
	cout<<"�������="<<n<<endl;
	cout<<"��С������="<<d/n<<endl;
	return 0;
 } 
