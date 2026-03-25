//Time complexity:O(n)
//Space complexity:O(1)
//add previous 3 numbers unlike fibonacci
class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1||n==2)
        {
            return 1;
        }
        long t0=0;
        long t1=1;
        long t2=1;
        long nextterm=0;
        for(int i=3; i<=n; i++)
        {
            nextterm=t0+t1+t2;
           t0=t1;
           t1=t2;
           t2=nextterm;
        }
        return nextterm;

    }
};