#include<iostream> // selection sort in decending order
using namespace std;
int print(int arr[], int n);
int insertionsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++)
    {   
       int current = arr[i];
       int previous = i-1;

       while(previous>=0 && arr[previous]>current)
        
            
           { swap(arr[previous], arr[previous+1]);    
            previous--;}
    
            arr[previous+1] = current;
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

        insertionsort(arr,n);

    return 0;
}