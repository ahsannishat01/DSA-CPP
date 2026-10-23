#include<bits/stdc++.h>
using namespace std;
int val1, val2;
bool solve(int arr[], int n,int x){
int i=0;
int j=n-1;
while(i<j){
    int sum = arr[i]+arr[j];
    if(sum == x){
        val1=arr[i];
        val2=arr[j];
        return true;
    }
    if(sum > x)j--;
    else i++;
}
return false;
}



int main(){
int n;
cin >> n;
int arr[n+2];
int x; //target
cin >> x;

for(int i=0; i<n; i++){
    cin >> arr[i];
}

sort(arr,arr+n);
bool ans = solve(arr, n, x);
if(ans == true){
    cout << "yes" << endl << val1 << " "<< val2;
}
else cout << "no" << endl;
return 0;
}
