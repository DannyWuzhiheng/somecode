#include <iostream>  
#include <cstdlib>  
#include <ctime>  
  
using namespace std;  
  
int main() {  
   
	int secret_number;  
    int guess;  
    int attempts = 0;  
    srand(time(0)); // ��ʼ�����������  
    secret_number = rand() % 100 + 1; // ����1-100֮��������  
    cout << "������һ��1-100֮�����������������һ�£�" << endl;  
    do {  
        cout << "��������Ĳ²⣺";  
        cin >> guess;  
        attempts++;  
        if (guess > secret_number) {  
            cout << "̫���ˣ�" << endl;  
        } else if (guess < secret_number) {  
            cout << "̫С�ˣ�" << endl;  
        }  
    } while (guess != secret_number);  
    cout << "��ϲ�㣬�¶��ˣ�" << endl;  
    cout << "������" << attempts << "�γ��ԡ�" << endl;  
    return attempts;  
}
