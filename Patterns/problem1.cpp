#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i=1; i<=n; i++){  // number of lines(rows)
        for(int j=1; j<=n-1; j++){ // columns
            cout << "*"; // gets printed first
        }
        cout << "*" << endl; // gets printed after j's loop
    }
}
int main (){
    starPattern(5);
    return 0;
}

// logic:  for each value of i, j's loop will run for n-1 times;
