#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i=1; i<=n; i++){ //number of lines (rows)`
        for(int j=1; j<=i-1; j++){ // columns
            cout << "*";
        }
        cout << "*" << endl;
    }
}
int main (){
    starPattern(5);
    return 0;
}

// logic: we have to make sure that the number of stars in each line(row) should be equal to the row number.