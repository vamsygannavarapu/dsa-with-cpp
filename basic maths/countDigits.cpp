#include<bits/stdc++.h>
using namespace std;


void countDigits(int N){
    int counter=0;
    while(N > 0){ // 7789>0
        N=N/10; //7789%10=778
        counter=counter+1;
        cout<< counter << " ";
    }
}
int main (){
countDigits(7789);
    return 0;
}