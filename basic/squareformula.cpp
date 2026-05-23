//Write a function which takes 2 numbers as parameters (a&b) and outputs : a^2+b^2+2*a
#include <iostream>
using namespace std;


int absquare(int a,int b){

int n  = (a*a + b*b + 2*a*b );
return n;
}


int main(){

cout << absquare(2,3) << endl;


    return 0;
}