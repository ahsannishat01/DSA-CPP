#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[101];
    int n;
    cin>> n;
    for(int i=0; i<n;i++){
         cin>>s;
         int x= strlen(s);
         if(x>10){
            cout<<s[0]<<x-2<< s[x-1] << endl;
         }
         else
         cout << s << endl;
    }
    
    return 0;
}