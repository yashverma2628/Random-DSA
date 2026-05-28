#include<iostream>
using namespace std;

int binarysearch(int arr[],int n ,  int target){
    int st=0,end=n-1;
   
    for (int i=0;i<n/2;i++){
             int mid = st + (end - st)/2;

        if (target > arr[mid]){ st = mid +1;}
        if (target < arr[mid]){ end = mid -1;}
        if (target == arr[mid]){ return mid;}
    }

    return -1;
}
int main (){

int arr[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};
int n= sizeof(arr)/ sizeof(int);
int target ;
cout << "enter the target element"<< endl;
cin >> target;
int x= binarysearch(arr,n,target);
if (x==-1){cout << "element not found";}
else {cout << "the position of the target element is :" << x << endl;}


    return 0;
}