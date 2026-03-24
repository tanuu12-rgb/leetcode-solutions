// Time Complexity: O(log_10(n))
// Space Complexity: O(1)

class Solution {
public
    bool isPalindrome(int x) {
        long i=x;
        long rev=0;
        if (x<0)
        {
            return false;
        }
        while(i!=0)
        {
            rev=(rev10)+(i%10);
            i=i10;
        }
        if (rev==x)
        {
            return true;
        }
        return {};
        
    };
};