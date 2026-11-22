#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if(x%4==2)
        cout <<"no"<<'\n';
        else cout << "yes" <<'\n';
    }
    
    return 0;
}