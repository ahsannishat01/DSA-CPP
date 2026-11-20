#include<bits/stdc++.h>
using namespace std;
int main(){
long long x;
cin >> x;
long long sum=0;
if(x>=100){
   int w = x/100;
    sum+= w;
    x= x-(w*100);
}
if(x>=20){
   int s = x/20;
    sum+= s;
    x= x-(s*20);
}
if(x>=10){
   int t = x/10;
    sum+= t;
    x= x-(t*10);
}
if(x>=5){
   int z = x/5;
    sum+= z;
    x= x-(z*5);
}
if(x>=1){
   int m = x/1;
    sum+= m;
    x= x-(m*1);
}
cout << sum << endl;
}
//x;
