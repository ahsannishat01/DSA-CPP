#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++) {
        string s;
        cin >> s;
        
        string s1;
        s1 = s;
        reverse(s1.begin(), s1.end());
        
        if(s == s1) {
            
            cout << "Case " << i << ": Yes\n";
        } else {
            cout << "Case " << i << ": No\n";
        }
    }
    
    return 0;
}