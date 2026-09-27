#include <bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        string s1=s;
        reverse(s1.begin(), s1.end());
        if(s==s1)
            cout << "Case" <<" "<< i+1 <<": "<<"Yes" << endl;
        else
        cout << "Case" <<" "<< i+1 <<": "<<"No"<< endl;
    }



    return 0;
}