#include <iostream> // sum of both the diagonal elementds 
using namespace std;

int diagonalSum (int mat[][6], int n){

   
    
    int sum=0;
      cout << "addition of diagonal elements of 2darray of" << n << "x" << n << "is : "<< endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            
            if (i == j){ sum = sum + mat[i][j]; }
                else if (j == n-i-1){ sum = sum + mat[i][j]; }
         }
    }
cout  << "sum " << sum << endl;

    return 0;
}


int main(){

 int mat[6][6]={ {1,2,3,4,5,6},
                    {7,8,9,10,11,12},
                    {13,14,15,16,17,18},
                    {19,20,21,22,23,24},
                    {25,26,27,28,29,30},
                    {31,32,33,34,35,36} };
    int n=6, // no. of rows
        m=6; // no. of columns
        diagonalSum( mat,n);
       

    return  0 ;
}