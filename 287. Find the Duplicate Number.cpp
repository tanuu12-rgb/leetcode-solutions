//TC:O(n)
//SC:O(n)
//solved using unordered map by visiting every node hence increasing time and space
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