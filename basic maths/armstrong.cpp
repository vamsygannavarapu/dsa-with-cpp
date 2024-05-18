#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int sum=0;
    int dup=n;
    int  k= to_string(n).length();
    while(n>0){
        int lastdigit= n%10;
        sum= sum + pow(lastdigit,k);
        n=n/10;
    }
    cout << k;
    return true?sum==dup:false;
}

int main(){
    int number;
    cout << "enter the number: ";
    cin >>  number;
   if( armstrong(number)){
    cout << "number is armstrong";
   }else{
    cout << "number is not armstrong";
   };
    return 0;
}