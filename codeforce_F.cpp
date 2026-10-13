#include <iostream>

using namespace std;

int main() {
    long long x,y;
    cin >> x >> y;
    long long m , n;
    m = x/10;
    n = y/10;
    long long t = (x - m*10) + ( y- n*10);
    cout << t << endl;
    
    return 0;
}