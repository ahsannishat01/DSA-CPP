#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x;
    cin >> x;
    vector<int> arr(x);
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
   long long result=0;
   for(int i=0; i<x-1; i++){
    if(arr[i+1]<arr[i]){
    result+= arr[i]-arr[i+1];
    arr[i+1]=arr[i];
    }
   }
   cout << result << endl;
    return 0; }