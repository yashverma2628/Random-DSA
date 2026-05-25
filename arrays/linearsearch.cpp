#include <iostream>
using namespace std;

int search(int arr[],int n , int tar){


for (int i =0;i<n;i++){

      if (arr[i] == tar){ return i; }     
    }
return -1;
}

int main () {

   
    
     int arr[]={1,2,3,4,5,6,7,8,99,6,5,4,3,2,1};
     int tar;
     cout << "enter target element" << endl;
     cin >> tar ;
   
    int n = sizeof(arr)/sizeof(int);
    int p =search( arr,n,tar);
    if (p == -1){ cout << "element not found" << endl;}
    else {
    cout << "the target element position is :" << p << endl;
    }

return 0;    
}