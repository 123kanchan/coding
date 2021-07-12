class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length()!=t.length())return false;
    unordered_map<char,int>mp;
        int i=0;
        while(s[i]!='\0')
        {
            mp[s[i]]++;
            i++;
        }
        i=0;
        while(t[i]!='\0')
        {
            mp[t[i]]--;
            if(mp[t[i]]==-1)return false;
            i++;
        }
        return true;
    }
};