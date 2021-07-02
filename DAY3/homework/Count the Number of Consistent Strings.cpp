class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int>g;
        int cnt=0;int i=0;
        while(allowed[i]!='\0')
        {
          g.insert(allowed[i]);
            i++;
            
        }
  
     for(string s:words)
     {
         string k=s;
         int i=0,flag=0;
         while(k[i]!='\0')
         {
             if(g.find(k[i])!=g.end())
             {
                 i++;continue;
             }
             else{flag=1;
                 break;}
         }
         if(flag==0)cnt++;
     }
        
return cnt;    
}};