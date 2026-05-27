#include <iostream>  //what is pass by reference?
using namespace std;

int  updatearr( int arr[] , int size){
  
    cout << "for function "<< endl;
for(int i=0; i<size;i++){

arr[i]= 2*arr[i];
cout << arr[i] << " ,";

 // updatearr wale function ne pehele value le li or update kr di(2 se multiply)
 // fir baad me jab main function se array ki vallue li to usko (2 se multiplyed wali value hi milegi )
 // array ki value har jagah change hoke 2*array ho chuki hai
 // ab koi bhi array ki value me kuch bhi karega to usko 2 se multiplyed value ka answer milega                      
}
}
int main(){

int arr[] = { 7, 4, 6, 8, 2};
 updatearr (arr ,5); cout << endl;
 cout << "in main " <<  endl;
 for(int i=0; i<5;i++){

arr[i]= 3*arr[i];
cout << arr[i] << " ,";}
cout << endl;
     return 0;
}