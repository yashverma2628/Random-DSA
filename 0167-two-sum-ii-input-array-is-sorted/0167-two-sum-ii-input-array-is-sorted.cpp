class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
            vector <int> answer;

int st=0; int end = numbers.size()-1;
while (st<end){

    int currsum = numbers[st] + numbers[end];
    if(currsum>target){ end--;}
     if (currsum<target){ st++;}
     if(currsum == target) { answer.push_back(st+1); answer.push_back(end+1); return answer;}




}

return answer;

    }
};