//TC:O(n)
//SC:O(1)
//add 2 previos numbers
class Solution {
public:
    int fib(int n) {
     if(n==0)
     {
        return 0;
     }   
     if(n==1)
     {
        return 1;
     }
     long t0=0;
     long t1=1;
     long nt;
     for(int i=2;i<=n;i++)
     {
        nt=t0+t1;
        t0=t1;
        t1=nt;
     }
     return nt;
    }
};