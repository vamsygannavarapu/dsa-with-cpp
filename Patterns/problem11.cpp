#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
    int start=1;
    for(int i=1; i<=n;i++){
        if(i%2==0) start =0;
        else start=1;
         cout << start;
        for(int j=1; j<=i-1; j++){
            start = 1-start;
            cout << start ;
        }
        cout << endl;
    }
}

int main (){
    starPattern(5);
    return 0;
}