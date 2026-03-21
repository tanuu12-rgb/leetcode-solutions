class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_set<int>s(nums1.begin(),nums1.end());
        for(int i=0;i<nums2.size();i++)
        {
            if(s.count(nums2[i]))
            {
                result.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return result;
    }
};