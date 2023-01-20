class Solution
{
public:
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        sort(pairs.begin(), pairs.end(), [](vector<int>&a, vector<int>&b)
             {
                    return a[1]<b[1];
             });
        int l =1,i =0, n =pairs.size();
        for(int j =1;j<n;j++)
        {
            if(pairs[j][0]>pairs[i][1]) i=j,l++;
        }
        return l;
    }
};