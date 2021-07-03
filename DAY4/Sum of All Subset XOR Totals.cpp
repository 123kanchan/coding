class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
      
        int sum=0;
        int x;
      int a=  nums.size();
        int s=(1 << a);
        for(int i=0;i<s;i++)
        {
           x=0;
            for(int j=0;j<a;j++)
            {
                if(i & (1 << j))
                    x=x^nums[j];
            }
            sum+=x;
        }
        return sum;
    }
};