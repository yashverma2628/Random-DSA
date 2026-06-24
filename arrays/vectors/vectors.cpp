#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec1 = {1,2,3,4};
    cout << "size of vec1 is " << vec1.size() << endl;
    cout << "capacity of vec1 is " << vec1.capacity() << endl; 
    
    vec1.push_back(5);
    cout << "size of vec1 is " << vec1.size() << endl;
    cout << "capacity of vec1 is " << vec1.capacity() << endl; 
    
    if(vec1.empty()){
        cout << "vector is empty" << endl;
    }else{
        cout << "vector is not empty" << endl;
    }

    vec1.shrink_to_fit();
    cout << "size of vec1 is " << vec1.size() << endl;
    cout << "capacity of vec1 is " << vec1.capacity() << endl; 

    vec1.pop_back();
    cout << "size of vec1 is " << vec1.size() << endl;
    cout << "capacity of vec1 is " << vec1.capacity() << endl; 

    vec1.clear();
    cout << "size of vec1 is " << vec1.size() << endl;
    cout << "capacity of vec1 is " << vec1.capacity() << endl; 
    
    return 0;
}