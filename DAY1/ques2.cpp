//remove duplicate key from array
//inplace
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;}
        }
        return i;
    }
};

OR
int func()
{
    int key;
    cin>>key;
    int i=0;
    int j=n-1;
    while(i<j)
    {

        if(arr[i]==val)
        {

            swap(arr[i],arr[j]);
            j--;
        }
        else{
            i++;
        }
    }
}return i+1;
