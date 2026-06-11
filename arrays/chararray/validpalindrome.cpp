#include <iostream>
#include<cstring>
using namespace std;


int palindrome(char arr [], int n)

    {int st=0,end=n-1,palindrome =0; 
        while(st<end){
           if (arr[st] != arr[end]){ return palindrome; }
            st++; end--;
    }palindrome =1;

    
    return palindrome;}
   

int main (){

char arr[]="madam";
if(!palindrome(arr,strlen(arr))){ cout << "not a palindrome";}
else { cout << " yes " << arr << " is a palindrome";}

return 0;
}