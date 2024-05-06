#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    // char ch='A';
    for(int i=1; i<=n; i++){ // i=1
        for(char ch='E'-i + 1; ch<='E'; ch++){ //E, D
            cout << ch<< " ";
        }
        cout << endl;
    }
}
int main(){
    starPattern(5);
    return 0;
}