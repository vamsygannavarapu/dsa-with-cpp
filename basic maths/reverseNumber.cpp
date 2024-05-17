#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
    int revNum=0;
    while(n>0){
        int lastdigits=n%10;
       
        revNum=(revNum*10)+lastdigits;
         n=n/10;
    }
    cout << revNum;
} 
int main(){
    reverseNumber(9932);
    return 0;
}