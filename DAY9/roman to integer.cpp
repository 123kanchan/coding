class Solution {
public:
    int romanToInt(string s) {
       int p=0;
        int ans=0;
        int a=s.length()-1;
        while(a>=0)
        {
            int d=value(s[a]);
           if(d>=p)
           {
               ans+=d;
               p=d;
           }
            else
                ans-=d;
            a--;
        }
        return ans;
    }
    int value(char s)
    {
        switch(s)
        {
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;   
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
        }
        return 0;
    }
};