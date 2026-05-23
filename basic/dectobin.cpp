#include <iostream>
using namespace std;


int dectobin(int num){

int n = num ; int power =1; int rem =0; int result =0;

while (n>0)
{
rem = n%2;
result = result + rem*power;
n = n /2;
power = power*10;

}

return result;
}


int main(){

cout << dectobin(7) << endl;


    return 0;
}