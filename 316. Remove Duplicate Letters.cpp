//Time complexity: O(n) it is O(n+n) which is O(n)
//Space complexity:O(1) auxiliary space as one array of 26 letters is used which is O(26)
//also result string cant hold more than 26 letters as it does not contain duplicate
//solved by finding its frequency from 26 characters

class Solution {
public:
    string removeDuplicateLetters(string s) {
       int freq[26]={0};
       string t;
       for(char c:s)
       {
        freq[c - 'a']++;
       }
       bool visited[26]={false};
       for(char c:s)
       {
        int index=c-'a';
        freq[index]--;
        if(visited[index])
        continue;

        while(!t.empty() && t.back()>c && freq[t.back()-'a']>0)
        {
        visited[t.back() - 'a']=false;
        t.pop_back();
        }
        t.push_back(c);
        visited[index]=true;
       }
       return t;
    }
};