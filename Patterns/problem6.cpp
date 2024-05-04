#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    for(int i=n; i>=1; i--){ // i=5; 4
        for(int j=1; j<=i-1; j++){ //j=1 ;
            cout << j; // 12345; 1234
        }
        cout << i << endl;
    }
}
int main() {
    starPattern(8);
    return 0;
}

// logic: number of digits in each row 