#include <iostream>
using namespace std;


int bintodec(int num){

int n = num ; int power =1; int rem =0; int result =0;

while (n>0)
{
rem = n%10;
result = result + rem*power;
n = n /10;
power = power*2;

}

return result;
}


int main(){

cout << bintodec(111011) << endl;


    return 0;
}