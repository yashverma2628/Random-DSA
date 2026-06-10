// Print out the sum of the numbers in the second row of the array

#include <iostream> 
using namespace std;

int matrix (int mat [][6],int n,int m){
int sum=0;
    for(int i=0;i<m;i++){
          sum = sum +  mat[1][i];

    }
    
    return sum;
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
       if( !matrix( mat,n,m) ){ cout << "row 2  not found";}
       else { cout << "the sum of the elements in 2nd row is :" <<  matrix( mat,n,m);}
    


    return  0 ;
}