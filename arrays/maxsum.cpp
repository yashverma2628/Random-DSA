#include <iostream>
using namespace std;

int maxsum(int arr[],int n){

 int sum=0;
    int maxisum=INT32_MIN ;
for (int i =0;i<n;i++){

    sum = sum +arr[i];
   maxisum = max(maxisum,sum);
    if (sum <=0){sum =0;}

    }
return maxisum ;
}

int main () {

     int arr[]={1,-2,3,4,-5,-6,7,8,-3,4,-1,9,4}; // maximum sum = 28
    int n = sizeof(arr)/sizeof(int);
   int x= maxsum( arr,n);
   cout << "maxsum is :" << x << endl;
    

return 0;    
}