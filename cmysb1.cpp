#include <iostream>
using namespace std;
class cmy{
public:
	int cmysb = 1;
	int cmynm(int n){
		int c;
		c=n*n;
		return c;
	}
}; 
int main(){
	cmy cnm;
	int co;
	for (int i = 1;90<i;i++){
		co=cnm.cmynm(i);
		cout<<co<<endl;
		
	}

}
