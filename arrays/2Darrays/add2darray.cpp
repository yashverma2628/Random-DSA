#include <iostream>
using namespace std;

int main (){

    int arr1[3][3];
    int n=3,m=3;
    cout << "enter elements of 1st 2darray of 3x3" << endl;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cin >> arr1[i][j];


        }

    }

    int arr2[3][3];
    int p=3,q=3;
    cout << "enter elements of 2nd 2darray of 3x3" << endl;  
    for(int i=0;i<p;i++){

        for(int j=0;j<q;j++){

            cin >> arr2[i][j];


        }

    }
int ans[3][3];
   
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
           
    }




      cout << "addition of elements of both 2darray of 3x3 is :" << endl;
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout << ans[i][j] << ", ";


        }cout << endl;

    }


    return 0;
}