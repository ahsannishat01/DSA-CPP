#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[10];
    int n ;
    cin>> n;
    int x =0;
    for(int i=0;i<n;i++){
        cin >> s;
        if(strcmp(s,"X++") == 0)
        x++;
        else if(strcmp(s,"++X") == 0)
        x++;
        else 
        x--;
    }

cout << x << endl;
    
    return 0;
}