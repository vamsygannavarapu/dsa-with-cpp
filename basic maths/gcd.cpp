#include<bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2){
    int gcd = 1;
    for(int i=1;i<=min(n1, n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout << "GCD OF " << n1 << " & " << n2 << " is: " << gcd;
    return gcd;
}
int main(){
    findGCD(10, 100);
    return 0;
}