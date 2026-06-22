class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int st=0,end=n-1; 
        while(st<end){
           
           if (!std::isalnum(s[st])) {
                st++;
            }
            
            else if (!std::isalnum(s[end])) {
                end--;
            }
           
          else if (std::tolower(s[st]) != std::tolower(s[end]))
          { return false; }
           
           else{ st++; end--;}
    }

    
    return true;
    }
};