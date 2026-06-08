//two pointers approach with sliding window kept on increasing right pointer till n and when it breaks the condition start increasing left and decreasing zero
//TC:O(n) SC:O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxl=0;
        int len=0;
        int left=0;
        int right=0;
        int zero=0;
        while(right<nums.size())
        {
            if(nums[right]==0)
            {
                zero++;
            }
           if(zero>k)
            {
               if(nums[left]==0)
               {
                zero--;
               }
               left++;
            }
               if(zero<=k)
               {
                len=right-left+1;
                maxl=max(len,maxl);
               }
               right++;
            
           
            
        }
         return maxl;
    }
};