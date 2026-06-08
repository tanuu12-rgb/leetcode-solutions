//solved using two pointers
// sorting took most time which is O(nlog n) 
//time complexity is O(nlog) space complexity is O(n) 
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int i=0;
        int j=n-1;
        int c=0;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            {
            i++;
            }
            j--;
           c++;
        }
        return c;
    }
};