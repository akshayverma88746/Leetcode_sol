class Solution 
{
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int ctr = 0;
        int prod = 1;
        int j =0;
        for(int i =0;i<n;i++)
        {
            prod = prod*nums[i];
            while(j<=i && prod >=k)
            {
                prod = prod/nums[j];
                j++;
            }
            ctr = ctr+i-j+1;
        }
        return ctr;
    }
};