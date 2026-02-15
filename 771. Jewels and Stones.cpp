class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int i=0;
        for(char c:jewels)
        {
            for(char d:stones)
            {
                if(c==d)
                {
                    i++;
                }
                
            }
        }
        return i;
    }
};