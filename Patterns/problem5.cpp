#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    for(int i=n; i>=1; i--){ // i =5; 4
        for(int j=i; j>=2; j--){ // j= 5; 4
            cout << "*"; // ******; *****

        }
        cout << "*" << endl;
    }
}

int main () {
    starPattern(8);
    return 0;
}