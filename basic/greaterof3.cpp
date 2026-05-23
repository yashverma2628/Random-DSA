#include <iostream>
using namespace std;

// Function to find the maximum of three numbers using nested if-else
int findGreatest(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    cout << "The greatest number is: " << findGreatest(num1, num2, num3) << endl;
    
    return 0;
}