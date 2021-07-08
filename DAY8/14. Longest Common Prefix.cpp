//ist approach
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(str.begin(),str.end());
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;   
    }
};
//ii approach

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size()==1)return str[0];
    string temp="";
        int j=0;
        string a=str[0];
        string b=str[1];
        while(a[j]!='\0'||b[j]!='\0')
        {
            if(a[j]==b[j])
                temp+=a[j];
            else
                break;
            j++;
        }
        int k=0;
        int f;
        string res="";
        if(str.size()==2)return temp;
        for(int i=2;i<str.size();i++)
        {
            string o=str[i];
            f=0;
            res="";
           while((temp[f]!='\0'||o[f]!='\0')&&o[f]==temp[f])
           {res+=o[f]; f++;}
           temp=res;
        }
    return res;
}
};
//iii) approach
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string a=str[0];
        int i=0,flag=0,cnt=0;
        string res="";
        while(a[i]!='\0')
        {
            cnt=1;
          for(int j=1;j<str.size();j++)
          {
             
             string b=str[j];
              if(a[i]==b[i]){
                 cnt++;
              }
              else{flag=1;
                  break;}
              
          }
            if(cnt==str.size())res+=a[i];
            if(flag==1)return res;
         i++;   
        }
        return res;
    }
};
