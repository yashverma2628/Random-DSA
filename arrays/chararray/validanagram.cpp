#include <iostream>
#include <string>
using namespace std;

bool isanagram(string str, string str2){

    if (str.length() != str2.length()){ return false;}

    int count[26] ={0};
    for (int i=0;i< str.length();i++){

        int index = str[i] -'a';
        count[index]++;

    }

        
          for (int i=0;i< str2.length();i++){

        int index = str2[i] -'a';
        if(count[index]==0){ return false;}
        count[index]--;

    }
return true;
}

int main () {

string str="anagram";
string str2="nagaram";

if(!isanagram(str,str2)){ cout << "not a valid anagram";} 
else {cout << "yes a valid anagram";}
    return 0;
}