#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int k=1; k<= n-i-1; k++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n-i;j++){
            cout << "*";
        }
        for(int k =1; k<=i+1; k++){
            cout << " ";
        }
        cout << endl;
    }
}
int main (){
    starPattern(5);
    return 0;
}