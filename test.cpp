#include <iostream>  
using namespace std;  
  
int main() {  
    int a, b, c;  
    cin >> a >> b >> c;  
   
    int h_a = a / 100; 
    int t_b = (b / 10) % 10; 
    int o_c = c % 10; 
  
    int hundred = 0, ten = 0, one = 0;  
 
    if (h_a <= t_b && h_a <= o_c&&a) 
    {  
        if (h_a!=0)
        {
            hundred = h_a;  
            if (t_b <= o_c) 
            {  
                ten = t_b;  
                one = o_c;  
            } 
            else 
            {  
                ten = o_c;  
                one = t_b;  
            }  
        }
        else
        {
            ten = h_a;
            if ((t_b <= o_c&&t_b!=0)||o_c==0) 
            {  
                hundred = t_b;  
                one = o_c;
            }
            else
            {  
                hundred = o_c;  
                one = t_b;  
            }
        }
    } 
    else if (t_b <= h_a && t_b <= o_c) 
    {  
        if (t_b!=0)
        {
            hundred = t_b;  
            if (h_a <= o_c) 
            {  
                ten = h_a;  
                one = o_c;  
            } 
            else 
            {  
                ten = o_c;  
                one = h_a;  
            }  
        }
        else
        {
            ten = t_b;
            if ((h_a <= o_c&&h_a!=0)||o_c==0) 
            {  
                hundred = h_a;  
                one = o_c;
            }
            else 
            {  
                hundred = o_c;  
                one = h_a;  
            }
        }
    } 
    else 
    {   if (o_c!=0)
        {
            hundred = o_c;  
            if (h_a <= t_b) 
            {  
                ten = h_a;  
                one = t_b;  
            } 
            else 
            {  
                ten = t_b;  
                one = h_a;  
            }  
        }
        else
        {
            ten = o_c;
            if ((h_a <= t_b&&h_a!=0)||t_b==0) 
            {  
                hundred = h_a;  
                one = t_b;  
            } 
            else 
            {  
                hundred = t_b;  
                one = h_a;  
            }
        }
        
    }  
  
    // 计算并输出最小的三位数  
    int result = hundred * 100 + ten * 10 + one;  
    cout << result << endl;  
  
    return 0;  
}