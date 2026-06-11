#include <iostream>
#include<cstring>
using namespace std;


void touppercase(char arr [], int n)

    {
        for (int  i=0;i<n; i++){

            char ch=arr[i];
                if(ch>='A' && ch <= 'Z'){ continue;}
                else { arr[i]= ch -'a' + 'A';  }
        }

            cout << arr << endl;
            
    }

    void tolowercase(char arr [], int n)

    {
        for (int  i=0;i<n; i++){

            char ch=arr[i];
                if(ch>='a' && ch <= 'a'){ continue;}
                else { arr[i]= ch -'A' + 'a';  }
        }

            cout << arr << endl;
    }

int main (){

char arr[]="AppLe";
touppercase(arr,strlen(arr));
tolowercase(arr,strlen(arr));
return 0;
}