//time complexity:O(n)
//Space complexity:O(n)
class Solution {
public:
    string trimTrailingVowels(string s) {
        int n =s.size();
        int i;
        for(i=n-1; i>=0; i--)
            {
                        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
                        {
                            break;
                        }
            }
        return s.substr(0,i+1);
    }
};