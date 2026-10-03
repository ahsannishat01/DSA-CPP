#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cnt=0;
  int d;
  if(n%4==0 || n%7==0)
  cout<< "YES";
  else{
  for(int i=0; i<sizeof(n);i++){
   d= n %10;
   n/=10;
    if(d==4 || d==7)
    continue;
    else
    cout << "NO";
  }
  cout<< "YES";}
    return 0;
}