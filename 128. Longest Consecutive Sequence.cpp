//TC:0(n)
//SC:0(n)
//It checks the start then go on counting and returns the longest from different streaks
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int>s;
        s.reserve(nums.size());
        for(int n:nums)s.insert(n);
        int longest=0;
        for(int n:s)
        {
            if(!s.count(n-1))
            {
                int cnum=n;
                int cstreak=1;
                while(s.count(cnum+1))
                {
                cnum+=1;
                cstreak+=1;
                }
                longest=max(longest,cstreak);
            }
        }
        return longest;
    }
};