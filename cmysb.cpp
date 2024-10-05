#include <iostream>
#include <cstdlib>
using namespace std;
class cmy{
private:
	int randint(int n){
    return (rand()%(n+1));
}
	int	math = randint(70);
	int chinese = randint(77);
	int	english = randint(67);
public:
	int cnm = 114514;
	int cmysb(){
		cnm = cnm + (1145141919810+1145141919810)*3*45*345;
		cout<<cnm<<endl;
		cout<<"ÓÙÎÃ" <<chinese<<endl;
		cout<<"Ê÷Ñ¨" <<math<<endl;
		cout<<"¶÷¸ñÀÕÊÇ" <<english<<endl;
	}
	int plus(int n = 0){
		cnm = cnm + (1145141919810+1145141919810)*3*45*n;
	}

};
int main(){
	cmy cnmsb;
	int c;
	c = cin.get();
	cout<<c<<endl;
	for (int i = 0;i<10;i++) {
		c=c*c;
		cnmsb.plus(i);
	}
	
	cnmsb.cnm = cnmsb.cnm+c;
	cout<<"CMYSB?="<<endl; 
	cnmsb.cmysb();
	cin.get();
}
