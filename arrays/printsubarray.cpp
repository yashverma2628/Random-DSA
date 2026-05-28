#include <iostream>
using namespace std;

int subarray(int arr[],int n){


for (int i =0;i<n;i++){

    for (int k =i;k<n;k++){ 

        cout << "(";
    for (int j =i;j<=k;j++){

        cout << arr[j] << ",";

       }  cout << "), ";
     } cout << endl;
    }
return -1;
}

int main () {

   
    
     int arr[]={1,2,3,4,5};
     
   
    int n = sizeof(arr)/sizeof(int);
   int x= subarray( arr,n);
    

return 0;    
}