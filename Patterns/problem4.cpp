#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout << i;
        }
        cout << i << endl;
    }
}
int main(){
    starPattern(5);
    return 0;
}
// logic: in each row, number of digits should be equal to the row number & for every value of i, i-1 times the j's loop will run