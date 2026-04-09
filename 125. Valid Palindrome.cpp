//TC:O(n) SC:O(1)
//removed if not alphanumeric and if spaces
//for empty string first pointer is at 0 and last pointer is s.size() which is 1 then 0-1=-1
//for while condition 0<-1 condition becomes false it comes out of the loop and returns true
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(!isalnum(s[i])){
            i++;
            }
            else if(!isalnum(s[j])){
            j--;
            }
            else{
                if(tolower(s[i]) != tolower(s[j]))
                {
                return false;
                }
                 i++;
                 j--;
            }
        }
        return true;
        
    }
};