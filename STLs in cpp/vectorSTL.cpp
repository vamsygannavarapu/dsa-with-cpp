#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a; //this will initialise a vector where size is 0 but has some capacity.

    //check the capacity
    cout << a.capacity() << endl;

    // calc the size
    cout <<a.size() << endl;

    // add an element to the last of the vector:
    a.push_back(1);
    cout << a.size() << endl;
    for(int i : a){
        cout << i << endl;
    }

    //remove an element from the last:
    a.pop_back();
    cout << "size after pop_back: " << a.size() << endl;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    for(int i : a){
        cout << i;
    }

    // we can make use of front(); back(); functions here as in arrays too


    cout <<endl<< "making use of front() " << a.front()<<endl;

    // clear the size of a vector:
    a.clear(); // this only clears the size but not the capacity.
    cout <<"size after clearing: "<< a.size() << endl;
    cout <<"capacity after clearing: "<< a.capacity() <<endl;

    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    for(int i : a){
        cout << i;
    }

    cout << endl;

    // copy the vector 'a' into another new vector 'v':
    vector<int> v(a);
    cout <<"vector v after getting copied: "<< endl;
    for(int i : v){
        cout << i; // prints the copied elements from 'a'
    }
    cout << endl;

    // another way of initialising a vector:
    vector<int> c(4,1); // this will create a vector with size 4 and all the elements as 1.
    cout << "elements from vector c after initialising in another way when we know the size of a vector: ";
    for(int i : c){
        cout << i<< endl;
    }

    // iterators:
    cout << endl << "start of the iterator concept in vector: ";
    vector<int>::iterator it = v.begin();
    cout << endl << *(it) << endl;
 
    // v.emplace_back(9);

      it++;
      cout<< "printimg the values in vector v: ";
       for(int i:v){
        cout << i<< endl;
       }
    cout << *(it);
    it=it+2;
    cout <<endl<<"final value of iterator: "<< *(it);

    // end(): 
    vector<int>::iterator end = v.end();
    end--;
    cout <<endl<<"value of v.end() is: "<< *(end);
    return 0;
}