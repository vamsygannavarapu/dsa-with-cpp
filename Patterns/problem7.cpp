#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i = 1; i<=n; i++){
        // space 
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        // star
        for (int k=1; k <= (2*i)-1; k ++){
            cout << "*";
        }

        // space
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main () {

    starPattern(7);
    return 0;
}