O(n)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0,sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int p=((nums.size())*(nums.size()+1))/2;
        return(p-sum);
    }
};