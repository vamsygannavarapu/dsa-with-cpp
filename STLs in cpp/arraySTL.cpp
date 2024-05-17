#include<bits/stdc++.h>
using namespace std;

int main(){

    // arrays in stl form

    // to create and array in  stl, we will have to include the library
    // then we will have to do the below step:
    array<int, 4> a = {1,2,3,4};

    //below are the basic functionalities offered to us by stl in cpp:

    // calc the size of an array:
    int size = a.size();
    for(int i=0;i<size; i++){
        cout << a[i] << endl; //access the ith element from an array
    }

    // check if the array is empty or not:
    cout << endl<< "empty or not: " << a.empty() << endl << endl; // return boolean value. 0 or 1 ( true or false)

    // to access front or last element from the array:
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.begin() << endl; // returns the memory address of that element 
    cout << a.end() << endl; // returns the memory address of that element 
    
    return 0;
}