class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> candies1;
        int greatest=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            if (candies[i]>greatest)
            {
                greatest=candies[i];
            }
        }
        for(int j=0;j<candies.size();j++)
        {
            if(candies[j]+extraCandies>=greatest)
            {
                candies1.push_back(true);
            }
            else
            {
                candies1.push_back(false);
            }
        
        }
        return candies1;
    }
};