#include <iostream>
using namespace std;

int large(int arr[],int n){

int large = arr[0];
for (int i =0;i<n;i++){

      if (arr[i] > large){ large = arr[i+1]; }     
    }
return large;
}

int main () {

   
    
     int arr[]={1,2,3,4,5,6,7,8,99,6,5,4,3,2,1};
   
    int n = sizeof(arr)/sizeof(int);
    cout << "the largest element is :" << large( arr,n) << endl;


return 0;    
}