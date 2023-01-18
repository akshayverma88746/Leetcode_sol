class Solution 
{
public:
    int numSplits(string s) 
    {
        unordered_map<char,int>lm, rm;
        for(int i =0;i<s.size();i++)
        {
            rm[s[i]]++;
        }
        int ans =0;
        for(int i =0;i<s.size();i++)
        {
            char c = s[i];
            lm[c]++;
            if(rm[c]>1)
                rm[c]--;
            else
                rm.erase(c);
            if(rm.size() == lm.size())
                ans++;
        }
        return ans;
    }
};