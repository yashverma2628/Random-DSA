#include <iostream>
using namespace std;

int reverse(int arr[],int n ){

int copyarr[n];
for (int i =0;i<n;i++){

      copyarr[n-i-1] = arr[i] ;    
    

}
cout << "the reverse of array is :" << endl;
for (int i =0;i<n;i++){

    cout << copyarr[i] << ", ";
}
return 0;
}
int main () {

   
    
     int arr[]={1,2,3,4,5,6,7,8,99};
     
   
    int n = sizeof(arr)/sizeof(int);
   
     reverse( arr,n) ;
    

return 0;    
}