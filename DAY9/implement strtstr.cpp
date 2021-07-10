class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)return 0;
  if(haystack.length() == 0 || needle.length() > haystack.length()) return -1;

        int len = haystack.length(), i = 0, j = 0, pos = 0;
        while(i < len && j < needle.length()) {
            if(haystack.at(i++) == needle.at(j)) {
                j++;
            } else {
                i = i - j;
                j = 0;
                pos = i;
            }
        }
        return j == needle.length()? pos : -1;
        
}};