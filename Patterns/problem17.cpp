#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i; j++){
            cout << " ";
        }
        for(char ch='A'; ch<'A' + (2*i)-1; ch++){
            cout << ch;
        }
        for(int j=1; j<= n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    starPattern(4);
    return 0;
}