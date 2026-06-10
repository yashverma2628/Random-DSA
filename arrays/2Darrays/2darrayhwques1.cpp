#include <iostream> // finding the number of duplicate  element in a 2d array by brute force approach
using namespace std;

int matrix (int mat [][6],int n,int m, int key){
int countofkey =0;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
        if (mat[i][j] == key) { countofkey ++;}
            }

    }
    
    return countofkey;
}

int main(){
    int key = 8;
 int mat[6][6]={ {1,2,3,4,5,6},
                    {7,8,9,10,11,12},
                    {13,14,15,16,17,18},
                    {19,8,21,22,23,24},
                    {25,26,27,8,29,30},
                    {31,32,33,34,35,36} };
    int n=6, // no. of rows
        m=6; // no. of columns
       if( !matrix( mat,n,m,key) ){ cout << "element not found";}
       else { cout << "number of dubpilate key element is :" <<  matrix( mat,n,m,key);}
    


    return  0 ;
}