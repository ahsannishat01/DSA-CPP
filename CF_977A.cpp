#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'



int main() {
    fast_io;

    ll x,y;
    cin >> x >> y ;
    while(y--){
        if(x%10==0){
            x=x/10;
            continue;
        }
        else{
            x=x-1;
            continue;
        }
    }
    cout << x << '\n';

    return 0;
}

//x;

