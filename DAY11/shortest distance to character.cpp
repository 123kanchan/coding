class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
      int i=0;
        vector<int>output;
        vector<int>index;
        while(s[i]!='\0')
        {
            if(s[i]==c)
                index.push_back(i);
            i++;
        }
       i=0;
        while(s[i]!='\0')
        {
            int min=INT_MAX;
            if(s[i]==c){output.push_back(0);i++;continue;};
           for(int k=0;k<index.size();k++)
           {
               if(min>abs(i-index[k]))
                   min=abs(i-index[k]);
           }
            output.push_back(min);
            i++;
            
        }
        return output;
    }
};