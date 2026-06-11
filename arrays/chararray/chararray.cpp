#include <iostream>
#include <cstring>
using namespace std;

int main (){

char arr[5]={'a','b','c','d','e'};
cout << arr << endl; // character array 
char arr2[6]={'a','b','c','d','e','\0'};
cout << arr2 << endl; // character array as a string 

char string[]="string array program";// string literals
char string2[50]="string array program";// string literals
cout << string << endl; 
cout << string2 << endl; 
cout << strlen(arr2) << endl;
cout << strlen(arr) << endl;

cout << "enter any string " << endl ;// string literals
char string3[100];
cin >> string3; //ignores everything after whitespace  
cout << string3 << endl; // string literals


cout << "enter a string" << endl;
char sentence[20];
cin.getline(sentence,20,'.'); 
cout << sentence << endl; 
cout << strlen(sentence) << endl;
}