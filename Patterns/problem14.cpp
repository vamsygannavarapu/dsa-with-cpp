#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<'A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main (){
    starPattern(5);

    return 0;
}