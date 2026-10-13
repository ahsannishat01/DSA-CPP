#include <bits/stdc++.h>
using namespace std;
int main (){
int n;
cin >> n;
vector<int>arr(n);
int sum=1;
for(int i=0; i<n; i++){
    cin >> arr[i];
}
sort(arr.begin(), arr.end());
for(int i=0; i<n-1; i++){
    if(arr[i] != arr[i+1])
    sum++;
    else 
    continue;
}
cout << sum << endl;
return 0; }