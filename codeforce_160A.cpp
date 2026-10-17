#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    int sum2 = sum / 2;
    int sumx = 0;
    int count = 0;
    
    sort(arr, arr + n, greater<int>());
    
    for(int i = 0; i < n; i++){
        sumx += arr[i];
        count++;
        
        if(sumx > sum2){
            break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}