//1st 
class Solution {
public:
    bool isPowerOfFour(int n) {
     if(n<=0)return false;
        if(n&(n-1))return false;
        int cnt=0;
        while(n)
        {
           n=n>>1;
            cnt++;
        }
        return(cnt&1)?true:false;
    }
};
//2nd
class Solution {
public:
int hamming(int n)
{
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n&(n-1);
    }
    return cnt;
}
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        if(n==1)return true;
         int cnt;
       
       cnt=hamming(n);
     if(cnt==1){cnt=hamming(n-1);}else return false;
      if(cnt%2==0)
          return true;
        else return false;
          
    }
};