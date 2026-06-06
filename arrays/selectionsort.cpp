#include<iostream> // selection sort in decending order
using namespace std;
int print(int arr[], int n);
int selectionsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++)
    {   int minindex =i;
       
            for (int j=i;j<n;j++)
            {       
                if(arr[j]>arr[minindex])
                {
                   minindex =j;   
                }

            }
            
            swap(arr[minindex], arr[i]);    
            
    }
     print(arr,n);
   
    return 0;
}

int print (int arr[],int n){

    for (int i=0;i<n;i++){

        cout << arr[i]<< ", ";
    }
    return 0;
}

int main (){

    int arr[]={1,3,6,9,7,4,2,4,8,9};
    int n= sizeof(arr)/ sizeof(int);

        selectionsort(arr,n);

    return 0;
}