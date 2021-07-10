class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s==" ")return 0;
        int cnt=0;
        int i=s.length()-1;
     while(i>=0&&s[i]==' ')
        {
            i--;
        }
        while(i>=0&&s[i]!=' ')
        {
            cnt++;
            i--;
        }
        return cnt;
    }
};