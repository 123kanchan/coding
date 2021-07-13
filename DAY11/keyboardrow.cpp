class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int hash[26];
        vector<string>res;
        string a="qwertyuiop";
        string b="asdfghjkl";
        string c="zxcvbnm";
        int i=0;
        while(a[i]!='\0')
        {hash[a[i]-97]=1;i++;}
        i=0;
        while(b[i]!='\0')
        {hash[b[i]-97]=2;i++;}
        i=0;
        while(c[i]!='\0')
        { hash[c[i]-97]=3;i++;}
        for(int i=0;i<words.size();i++)
        {
            string b=words[i];
           string a="";
            int p=0;
            while(b[p]!='\0')
            {
                a+=tolower(b[p]);
                p++;
            }
            int temp=hash[a[0]-97];
            int k=1,flag=0;
            while(a[k]!='\0')
            {
                if(hash[a[k]-97]==temp)
                {k++;continue;}
                else
                {
                    flag=1;
                    break;
                }
                k++;
            }
            if(flag==0)res.push_back(b);
        }
      return res;    
    }
    
};