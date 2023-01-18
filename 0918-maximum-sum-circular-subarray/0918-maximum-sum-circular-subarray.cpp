class Solution 
{
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int maxsum = INT_MIN;
        int currmax = 0;
        int total =0;
        int minsum = INT_MAX;
        int currmin = 0;
        for(auto x:nums)
        {
            currmax = max(x, currmax+x);
            maxsum = max(currmax, maxsum);
            currmin = min(x, currmin+x);
            minsum = min(currmin, minsum);
            total = total+x;
        }
        return maxsum > 0 ? max(maxsum, total-minsum) : maxsum;
    }
};