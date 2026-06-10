//solved using two pointer and sliding window
//TC:O(n) SC:O(1)
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int right=0;
        int left=0;
        int maxl=0;
        unordered_map<int,int>mp;
        while(right<fruits.size())
        {
            mp[fruits[right]]++;
            if(mp.size()>2)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                {
                    mp.erase(fruits[left]);
                }
                left++;
            }
            maxl=max(maxl,right-left+1);
            right++;
            
        }
        return maxl;
        
    }
};