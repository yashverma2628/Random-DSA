#include <iostream>     //find the smallest and the largest number and its index place in the array
using namespace std;


int main (){
int size =5;
int num [size] ={99, 87,64, 84, 74};
int smallest = INT32_MAX;              // incomplete hai solve nhi hua
int largest = INT32_MIN;
for (int i=0; i<size;i++ ){

if ( num[i]<smallest){
smallest = num[i];}

if ( num[i]>largest){
largest = num[i]; 
 }} 
cout << "smallest number is : " <<smallest<<  endl;
cout << "largest number is : " << largest << endl;

    return 0;
}