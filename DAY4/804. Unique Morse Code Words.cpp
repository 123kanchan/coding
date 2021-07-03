class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string>a{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
    set<string>p;
        int i=0;
        
      for(string s :words)  {
          i=0;
          string d=s;
          string res="";
          while(d[i]!='\0')
          {
              res+=a[d[i]-97];
              i++;
          }
          p.insert(res);
      }
        return p.size();
    }
};