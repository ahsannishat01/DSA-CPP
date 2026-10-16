#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, k;
    cin >> n >> k;
    int x=4*60;
    int y=x-k;
    int cnt=0;
    int w=y;
    for(int i=1; i<=n; i++){
        if(5*i <= w){
            cnt++;
            w=w-(5*i);
        }
        else
        break;
    }
    cout << cnt << endl;
    return 0;
}