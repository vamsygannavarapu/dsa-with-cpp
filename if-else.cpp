#include<bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    if(num >= 18){
        cout << "you are an adult";
        if(num >=54){
            cout << ", but retirement soon!";
        }
    }else{
        cout << "you are not an adult";
    }
    return 0;
}