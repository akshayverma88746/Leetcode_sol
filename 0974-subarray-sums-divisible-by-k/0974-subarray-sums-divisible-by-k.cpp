class Solution 
{
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int n =nums.size();
        int ctr = 0;
        unordered_map<int,int> psa ;
        psa[0]++;
        int sum =0;
        for(int i =0;i<n;i++)
        {
            sum = sum+nums[i];
            int rem = sum%k;
            if(rem <0)
                rem =rem+k;
            if(psa.find(rem) != psa.end())
            {
                ctr = ctr+psa[rem];
            }
            psa[rem]++;
        }
        return ctr;
    }
};