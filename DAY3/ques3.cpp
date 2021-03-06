//We are given a list nums of integers representing a list compressed with run-length encoding.

//Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

//Return the decompressed list.

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
       int i=0;
        int j=i+1;
        vector<int>res;
        while(j<nums.size())
        {
            int a=nums[i];
            int b=nums[j];
            while(a--)
            {
                res.push_back(b);

            }
            i+=2;
            j+=2;
        }
         return res;
    }

};
