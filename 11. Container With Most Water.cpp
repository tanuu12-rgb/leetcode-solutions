//solved using two pointers approach
//TC:O(n) SC:O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int largest=0;
           while(i<j)
           {
                int w=j-i;
                int h=min(height[i], height[j]);
                largest =max(largest,w*h);
                if(height[i]<height[j])
                {
                    
                    i++;
                }
                else
                {
                    j--;
                }
               
           }
        
        return largest;
    }
};