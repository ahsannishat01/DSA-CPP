#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int m , n;
    m = x/10;
    n = y/10;
    int t = (x - m*10) + ( y- n*10);
    cout << t << endl;
    
    return 0;
}