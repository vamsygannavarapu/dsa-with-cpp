#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i = 1; i<=n; i++){

        // space
        for(int j = 1; j <= i-1; j++){
            cout << " ";
        }
        //star
        for(int k = 1; k <= 2*(n-i) + 1; k++){
            cout << "*";
        }
        //space
        for(int j = 1; j <= i-1; j++){
            cout << " ";
        }

        cout << endl;
    }
}
int main (){

    starPattern(5);
    return 0;
}