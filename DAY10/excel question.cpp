class Solution {
public:
    string convertToTitle(int n) {
       char c;
        string colname;
        while(n>0)
        {
            c='A'+(n-1)%26;
            colname=c+colname;
            n=(n-1)/26;
        }
        return colname;
    }
};