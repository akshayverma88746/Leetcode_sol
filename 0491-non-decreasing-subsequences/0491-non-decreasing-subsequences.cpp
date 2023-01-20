class Solution 
{
public:
    void helper(int ind, set<vector<int>> &res, vector<int> &ans, vector<int> &nums)
    {
        if(ind >= nums.size())
        {
            if(ans.size()>=2)
                res.insert(ans);
             return;
        }
       
        if( !ans.size() || nums[ind] >= ans.back())
        {
            ans.push_back(nums[ind]);
            helper(ind+1, res, ans, nums);
            ans.pop_back();
        }
        helper(ind+1, res, ans, nums);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        set<vector<int>> res;
        vector<int>ans;
        helper(0, res, ans, nums);
        return vector(res.begin(), res.end());
    }
};