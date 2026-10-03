#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;
string s;
while(n--){
    cin >> s;
int v = s.length();
int x=0;
for(int i=0; i< v; i++){
    if(s[i]=='1')
    x++;
    else
    continue;
}
if(x == 0) {
            cout << "NO" << endl;
            continue; 
        }
int w=0;
for(int i=0; i< v ;i++){
    if(s[i]=='1'){
    w=i;
    break;}
    else 
    continue;
}
int i;
for(i=w; i<w+x; i++){
    if(s[i]=='0')
    break;
    }

if(i == w+x){
    cout << "YES" << endl;
}
else
cout << "NO" << endl;

}
}