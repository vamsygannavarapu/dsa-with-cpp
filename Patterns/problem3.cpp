#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout << j;
        }
        cout << i<< endl;
    }
}
int main (){
    starPattern(5);
    return 0;
}

// logic: number of digits in each row denote the row nunmber