class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j;
        string res;
        string c;
        while(s[i]!='\0'){
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]>=48&&s[i]<=57)
        {
            if(s[i]>=97&&s[i]<=122||s[i]>=48&&s[i]<=57)
            res+=s[i];
            else
            res+=s[i]+32;
            
        
        }
            i++;}
          
        int n=res.length();
        i=0,j=n-1;
    while(i<=j)
        {
          if(res[i]==res[j]){i++;j--;}
        else return false;
        }
        return true;
    }
};