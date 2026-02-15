class Solution {
public:
    string defangIPaddr(string address)
    {
        string address2;
       for(int i =0;i<address.size();i++)
       {
        if(address[i]=='.')
        {
            address2 += "[.]";
        }
        else
        {
            address2 += address[i];
        }
       }
       return address2;
    }
};