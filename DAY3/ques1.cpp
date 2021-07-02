//given an array find number of elements smaller than that current element and return in array
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
   int d=*max_element(nums.begin(),nums.end());
        vector<int>hash(d+1);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
      for(int i=0;i<nums.size();i++)
      {
        int k= nums[i];
          int cnt=0;
          for(int j=0;j<k;j++)
          {
              if(hash[j]!=0)
                  cnt+=hash[j];
          }
          nums[i]=cnt;
      }

      return nums;
    }
};
