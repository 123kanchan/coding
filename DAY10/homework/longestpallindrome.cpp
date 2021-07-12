class Solution {
public:
    int longestPalindrome(string s) {
      int hash[52]={0};
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]>=65&&s[i]<=90)
            hash[s[i]-65]++;
            else
                hash[s[i]-71]++;
            i++;
        }
    i=0;
        int res=0;
       for(i=0;i<52;i++)
        {
           if(hash[i]>1&&hash[i]%2==0) 
               res+=hash[i];
           else
               if(hash[i]>1&&hash[i]%2!=0)
                   res+=hash[i]-1;
        }
        if(res<s.length())
            return res+1;
        else return res;
    }
};