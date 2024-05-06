#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    
    for(int i=1; i<=n; i++){
    char ch='A' +i -1;
        for(int j =1; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main (){
    starPattern(5);
    return 0;
}