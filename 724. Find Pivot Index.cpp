//solved by finding prefix and suffix
//TC:O(n) SC:O(n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix=0;
        int suffix=0;
        int n=nums.size();
        vector<int>ans(n,0);
        vector<int>ans1(n,0);
        for(int i=0;i<n;i++)
        {
            ans[i]=prefix;
            prefix+=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            ans1[i]+=suffix;
            suffix+=nums[i];
        }
         for(int i=0;i<n;i++)
        {
           if(ans[i]==ans1[i])
           return i;
           
        }
        return -1;
    }
};