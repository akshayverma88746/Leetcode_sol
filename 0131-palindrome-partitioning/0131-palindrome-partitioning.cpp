class Solution 
{
public:
    bool isp(string s)
    {
        string a=s;
        reverse(a.begin(),a.end());
        if (a==s) 
            return true;
        else 
            return false;
    }
    void helper(int ind, vector<vector<string>> &res, vector<string> &ans, string s)
    {
        if(ind==s.size())
        {
            res.push_back(ans);
            return;
        }
        for(int i =ind;i<s.size();i++)
        {
            if(isp(s.substr(ind, i-ind+1)))
            {
                ans.push_back(s.substr(ind, i-ind+1));
                helper(i+1, res, ans, s);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>>res;
        vector<string>ans;
        helper(0, res, ans, s);
        return res;
    }
};