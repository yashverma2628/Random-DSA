#include <iostream>
#include<cstring>
using namespace std;


void reverse(char arr [], int n)

    {int st=0,end=n-1;
        while(st<end){
            swap(arr[st],arr[end]);
            st++;
           end--;
            
    }
    cout << "reversed array is :" <<arr;
    }
   

int main (){

char arr[]="AppLe";
reverse(arr,strlen(arr));

return 0;
}