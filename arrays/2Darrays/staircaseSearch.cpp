#include <iostream> // staircase search in a sorted 2 d array
using namespace std;

int matrix (int mat [][6],int n,int m, int key){
int r =0, c=m-1;
    while(r < n && c >= 0 ){

  
        if(mat[r][c] == key){ cout << "element found at : " << r << "," << c ; return 1;}
        if(mat[r][c] > key){ c--;}  
        if (mat[r][c] < key ) {r++;}

    }
    
    return 0;
}

int main(){
    int key = 71;
 int mat[6][6]={      {10,20,30,40,50,60},
                    {15,25,35,45,55,65},
                    {27,29,37,47,57,67},
                    {32,42,52,62,72,82},
                    {36,46,56,66,76,86},
                    {41,51,61,71,81,91} };
    int n=6, // no. of rows
        m=6; // no. of columns
       if( !matrix( mat,n,m,key) ){ cout << "element not found";}
    


    return  0 ;
}