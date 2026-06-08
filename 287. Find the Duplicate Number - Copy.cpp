//TC:O(n)
//SC:O(1)
//solved using floyds algorithm to ensure efficient memory usage
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums)
        {
            mp[n]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if (mp[nums[i]]>1)
            return nums[i];
        }
        return {};
    }
}; 