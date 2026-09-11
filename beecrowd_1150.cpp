#include <iostream>

using namespace std;

int main() {
    int x, z;
    
    cin >> x;
    
    cin >> z;
    while (z <= x) {
        cin >> z;
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = x; sum <= z; i++) {
        sum = sum + i;
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}