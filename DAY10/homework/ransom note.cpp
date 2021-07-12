class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        int i=0;
        while(ransomNote[i]!='\0')
        {
            mp[ransomNote[i]]++;i++;
        }
            i=0;
        while(magazine[i]!='\0')
        {
            mp[magazine[i]]--;
            i++;
        }
        i=0;
        while(ransomNote[i]!='\0')
        {
            if(mp[ransomNote[i]]<=0)
            {i++;continue;}
            else
                return false;
            
        }
        return true;
    }
};