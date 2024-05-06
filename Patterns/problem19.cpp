#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        for(int k =1; k<=(2*i)-2; k++){
            cout << " ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout << "*";
        }
        for(int k =1; k<=n+5-(2*i); k++){
            cout << " ";
        }
        for(int j =1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    starPattern(5);

    return 0;
}