//number of 1 bits
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        int f=1;
      while(n>0)
      {
       if(( f&n)!=0)cnt++;
         n= n>>1;
      }
        return cnt;
    }
};