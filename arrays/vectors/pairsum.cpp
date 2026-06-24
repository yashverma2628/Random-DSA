#include<iostream>
#include <vector>
using namespace std;

vector <int> pairsum (vector <int> vec1, int target)
{
    vector <int> answer;

int st=0; int end = vec1.size()-1;
for (int i=0; i<vec1.size();i++){

    int currsum = vec1[st] + vec1[end];
    if(currsum>target){ end--;}
     if (currsum<target){ st++;}
     if(currsum == target) { answer.push_back(st); answer.push_back(end); return answer;}




}

return answer;

}

int main(){

vector<int> vec1 = {3,2,4};
int target =9;
vector<int> answer = pairsum(vec1, target) ;
if (answer.empty()){ cout << "no pairs exist";}
else{cout << answer[0] << "," << answer[1];
}
return 0;
}