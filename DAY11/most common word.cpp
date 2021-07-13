class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
     
     for(int i=0;i<paragraph.length();i++)
     {
         if(paragraph[i]>=65&&paragraph[i]<=90||paragraph[i]>=97&&paragraph[i]<=122)
         paragraph[i]=tolower(paragraph[i]);
         else
             paragraph[i]=' ';
     }
        unordered_set<string>set(banned.begin(),banned.end());
        unordered_map<string,int>mp;
        stringstream s(paragraph);
        string word,t;
        int f=INT_MIN;
        while(s>>word)
        {
         if(!set.count(word))
         {
             mp[word]++;
             if(mp[word]>f)
             { f=mp[word];t=word;}
         }
        }
     
     return t;
    }
};
