class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int>entry;
        for(int i=0;i<nums.size();i++)
        {
            if(entry.count(nums[i]))
            {
                return true;
            }        
            entry.insert(nums[i]);
        }
        return false;
    }
    
};