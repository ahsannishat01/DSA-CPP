#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
       if(gcd(a,b)+lcm(a,b) == a+b) cout <<"true"<<endl;
       else cout<<"false"<< endl;
    }


return 0;}