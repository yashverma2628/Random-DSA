#include <iostream> // print the 2d matrix array in the spiral order
using namespace std;

int matrix (int mat [][6],int n,int m){

   
    int stRow=0,stCol=0,endRow=n-1,endCol=m-1;
    cout << "elements of 2darray of " << n << "x"<< m << " in spiral order" << endl;

    while(stRow<= endRow && stCol<= endCol){
    
    for(int i=stCol;i<=endCol;i++){

        cout << mat[stRow][i] << ",";

    }cout << endl;

       
   
     for(int j=stRow+1;j<=endRow;j++){

        cout << mat[j][endCol] << ",";

    }cout << endl;

            

         for(int i=endCol-1;i>=stCol;i--){
                if(stRow==endRow){break;} // to avoid duplicate elements print in odd matrix
        cout << mat[endRow][i] << ",";

    }cout << endl;

    
    

        for(int i=endRow-1;i>=stRow+1;i--){
                if(stCol==endCol){break;} // to avoid duplicate elements print in odd matrix
        cout << mat[i][stCol] << ",";

    }cout << endl;

   

stRow++; endCol--;
stCol++; endRow--;
    
    }

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
        matrix( mat,n,m);
        int mat2[5][6]={ {1,2,3,4,5,6},
                    {7,8,9,10,11,12},
                    {13,14,15,16,17,18},
                    {19,20,21,22,23,24},
                    {25,26,27,28,29,30}
                    };
    int p=5, // no. of rows
        q=6; // no. of columns
        matrix( mat2,5,6);


    return  0 ;
}