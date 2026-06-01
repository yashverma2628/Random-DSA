#include <iostream>
using namespace std;

int maxprofit(int arr[],int n)
{
 int maxprofit =0;
 int profit =0;
for (int i =0;i<n;i++)
    {

   for (int j =n;j>i;j--)
        {

        if (j>i && arr[j]> arr[i])
            {  profit = ( arr[j]- arr[i] ); 
        
        if (profit > maxprofit){  maxprofit = max(profit,maxprofit);}
            }

        }

    }
return maxprofit;
}

int main () {
     
        int arr[]={7,1,2,8,3,66}; // but at 1 and sell at 66 
        int n = sizeof(arr)/sizeof(int);
        cout << "the largest element is :" << maxprofit( arr,n) << endl;  //maxprofit will be 66-1 = 65 answer


return 0;    
}