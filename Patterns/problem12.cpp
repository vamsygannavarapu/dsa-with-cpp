#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    for(int i=1; i<=n; i++){
        // row number
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        // spaces count
        for(int k = 1; k<=2*(n-i); k++){
            cout << " ";
        }
        // row number
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }

}
int main (){
    starPattern(4);
    return 0;
}