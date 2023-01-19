class Solution 
{
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> psa;
        int ctr = 0;
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++)
        {
            sum  = sum+nums[i];
            if(sum == k)
                ctr++;
            if(psa.find(sum-k) != psa.end())
                ctr = ctr+psa[sum-k];
            psa[sum]++;
        }
        return ctr;
    }
};