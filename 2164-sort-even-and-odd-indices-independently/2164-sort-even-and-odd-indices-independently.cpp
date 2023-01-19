class Solution 
{
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int>odd;
        vector<int>even;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(), greater<int>());
        nums.clear();
        int e =0;
        int o =0;
        for(int i =0;i<n;i++)
        {
            if(i%2==0)
            {
                nums.push_back(even[e]);
                e++;
            }
            else
            {
                nums.push_back(odd[o]);
                o++;
            }
        }
        return nums;
    }
};