#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<string>words= {"apple","banana","apple","mango","banana"};
    unordered_map<string,int>mp;
    for(string s:words)
    {
        mp[s]++;
        
    }
    for(auto it:mp)
    {
        cout << it.first << "-" << it.second << endl;
    }

string t="tanaya";
unordered_map<char,int>mpp;
for(char c:t)
{
    mpp[c]++;
}

for(auto itt:mpp)
{
    cout<<itt.first<<"-"<<itt.second<<endl;
}
return 0;

}