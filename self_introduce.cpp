#include <iostream>  
#include <string>  
using namespace std;  
  
class Introduce {  
private:  
    string name = "My name is ";  
    string hobbies = "I like ";  
    string good_at = "I'm good at ";  
    string awards = "I have been awarded ";  
    string link = ", "; 
public:  
    void input_output(){  
        string name_user;  
        cout << "What's your name? ";  
        cin >> name_user;  
  
        string hobbies_list[3];  
        cout << "What are your hobbies (3)? ";  
        for (int i = 0; i < 3; i++) {  
            cin >> hobbies_list[i];  
        }  
  
        string good_at_user;  
        cout << "What are you good at? ";  
        cin >> good_at_user;  
  
        string awards_list[3];  
        cout << "What are your awards (3)? ";  
        for (int i = 0; i < 3; i++) {  
            cin >> awards_list[i];  
        }  
  
        cout << name << name_user << "." << endl;  
        cout << hobbies;  
        for (int i = 0; i < 3; i++) {  
            cout << hobbies_list[i];  
            if (i < 2) {
                cout << link;  
            }  
        }  
        cout << "." << endl;  
        cout << good_at << good_at_user << endl;  
        cout << awards;  
        for (int i = 0; i < 3; i++) {  
            cout << awards_list[i];  
            if (i < 2) {
                cout << link;  
            }  
        }  
        cout << "." << endl;  
        
    }  
};  
  
int main(){  
    Introduce introduce;  
    introduce.input_output();  
    cin.ignore(); 
    return 0;  
}
