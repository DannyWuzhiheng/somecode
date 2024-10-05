#include <iostream>
using namespace std;
class cmy{
public:
	int cnm(int cmysb){
		cmysb = cmysb+10;
	}
	
};
int a = 10;
int main(){
	cmy cns;
	for (int i = 1;i<=1;i++) {
		a=cns.cnm(a);	
	}
	cout<<a<<endl;
}
