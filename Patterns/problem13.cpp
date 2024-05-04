#include<bits/stdc++.h>
using namespace std;

void starPattern(int n){
     int num=0;
    for(int i =1; i<=n; i++){
   
        for(int j=1; j<=i; j++){
            num = num +1;
            cout << num << " ";
        }
        cout << endl;
    }

}

int main(){
    starPattern(5);

    return 0;
}