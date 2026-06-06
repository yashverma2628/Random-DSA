#include<iostream>
using namespace std;
int print(int arr[], int n);
int bubblesort(int arr[],int n){
     bool isswap = false;
    for(int i=0;i<n-1;i++)
    {
       
            for (int j=0;j<n-i-1;j++)
            {   
                
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    isswap = true;
                }

            }
            if(!isswap)
            { cout << "array already sorted ";
                return 0;
            }
    }
     print(arr,n);
   
   

    return -1;
}

int print (int arr[],int n){

    for (int i=0;i<n;i++){

        cout << arr[i]<< ", ";
    }
    return 0;
}

int main (){

    int arr[]={1,3,6,9,6,3,2,5,7,4,66,3,2,88,4,99};
    int n= sizeof(arr)/ sizeof(int);

        bubblesort(arr,n);

    return 0;
}