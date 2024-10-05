#include <iostream>  
#include <cstdlib>  
#include <ctime>  
  
using namespace std;  
  
int main() {  
   
	int secret_number;  
    int guess;  
    int attempts = 0;  
    srand(time(0)); // 初始化随机数种子  
    secret_number = rand() % 100 + 1; // 生成1-100之间的随机数  
    cout << "我想了一个1-100之间的整数，请你来猜一猜：" << endl;  
    do {  
        cout << "请输入你的猜测：";  
        cin >> guess;  
        attempts++;  
        if (guess > secret_number) {  
            cout << "太大了！" << endl;  
        } else if (guess < secret_number) {  
            cout << "太小了！" << endl;  
        }  
    } while (guess != secret_number);  
    cout << "恭喜你，猜对了！" << endl;  
    cout << "你用了" << attempts << "次尝试。" << endl;  
    return attempts;  
}
