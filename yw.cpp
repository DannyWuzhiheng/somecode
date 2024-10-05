#include <iostream>

using namespace std;
int weight[4], money[4];
int chose[4];
int main() {
    int V;
    cin >> V;

    for (int i = 0; i < 4; ++i) {
        cin >> weight[i] >> money[i];
    }

    int max_value = 0;
 

    for (int a = 0; a <= 3; ++a) {
        for (int b = 0; b <= 3; ++b) {
            for (int c = 0; c <= 3; ++c) {
                for (int d = 0; d <= 3; ++d) {
                    int total_volume = a * weight[0] + b * weight[1] + c * weight[2] + d * weight[3];
                    if (total_volume <= V) {
                        int total_value = a * money[0] + b * money[1] + c * money[2] + d * money[3];
                        if (total_value > max_value) {
                            max_value = total_value;
                            chose[0] = a;
                            chose[1] = b;
                            chose[2] = c;
                            chose[3] = d;
                        }
                    }
                }
            }
        }
    }

    cout << max_value << endl;
    for (int i = 0; i < 4; ++i) {
        cout << chose[i] << (i < 3 ? " " : "\n");
    }

    return 0;
}
