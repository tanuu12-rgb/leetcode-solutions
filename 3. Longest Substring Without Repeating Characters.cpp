//TC:O(n)
//SC:O(k) where k is the size of the character set
//solved by sliding window approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0;
        int right=0;
        int max_len=0;
        while(right < s.size())
        {
            char r=s[right];
            mp[r]++;
    
        while(mp[r]>1)
        {
            char l=s[left];
            mp[l]--;
            left++;
        }
        max_len=max(max_len,right-left+1);
        right++;
        }
        return max_len;

    }
};