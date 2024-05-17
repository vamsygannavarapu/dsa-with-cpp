#include<bits/stdc++.h>
using namespace std;

void palindrome (int n){
    int dup=n;
    int revNum=0;
    while(n>0){
        int lastdigits = n%10;
        revNum= (revNum*10)+lastdigits;
        n=n/10;
    }
    cout << revNum;
    if(revNum==dup){
        cout << " is a palindrome";
    }else cout << " is not a palindrome";
}
int main(){
    palindrome(4554);
    return 0;
}