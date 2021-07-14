//approach 3
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=nums[0];
       for(int i=1;i<nums.size();i++)
       {
           res^=nums[i];
       }
        return res;
    }
};


//2nd approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int i;
        for( i=0;i<n-1;i=i+2)
        {
            if(nums[i]==nums[i+1])
                continue;
            else
                return nums[i];
        }
        return nums[i];
    }
};

//approach 1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int,int> s ;
     
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]++;
        }
        for(auto i: s)
        {
            if(i.second==1)
                return i.first;
        
        }
        return 0;
    }
};