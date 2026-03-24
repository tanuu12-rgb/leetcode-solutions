//TC:O(1)
//SC:O(1)
//solved it without using loops and recursion
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        {
            return false;
        }
        if((n & n-1)==0 && n>0)
        {
            return true;
        }
        return false;
    }
};