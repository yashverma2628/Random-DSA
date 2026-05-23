// Writea function that accepts a character(ch) as parameters & returns the character that 
//occurs after ch in the English alphabet. 
//Eg:input=‘c’,returnvalue=‘d
//Note: for ch=‘z’, return‘a’. 
#include<iostream>
using namespace std;

char abc(char a){

if (a=='z'){ return 'a';}
return a+1;

}

int main(){
    char a;
    cout << "enter a character "<< endl;
    cin >> a;
cout << abc(a);

 return 0;   
}