class Solution 
{
public:
    int commonFactors(int a, int b) 
    {
        int ctr =0;
        for(int i =1;i<=b;i++)
        {
            if(a%i ==0 && b%i == 0)
                ctr++;
        }
        return ctr;
    }
};