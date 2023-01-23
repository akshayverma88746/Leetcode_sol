class Solution 
{
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        map<int,int>m1,m2;
        if(n == 1)
            return 1;
        for(int i =0;i<trust.size();i++)
        {
            m1[trust[i][0]]++;
        }
        for(int i =0;i<trust.size();i++)
        {
            m2[trust[i][1]]++;
        }
        for(int i =0;i<=n;i++)
        {
            if(m1[i] == 0 && m2[i] == n-1)
                return i;
        }
        return -1;
    }
};