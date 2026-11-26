#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >>t;
    long long sum=1;
    while(t--){
        int arr[2];
        cin >> arr[0] >> arr[1];
        long long x=pow(arr[0],arr[1]);
        sum *= x;

    }
    cout << sum << endl;
    return 0;}