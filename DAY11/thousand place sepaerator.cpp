class Solution {
public:
    string thousandSeparator(int n) {
   if(n==0)return "0";
   string a=to_string(n);
        if(a.length()<=3)return a;
        else
        {
          stack<char>st;
            int cnt=3;
            int i=a.length()-1;
            while(i>=0)
            {
                st.push(a[i]);
                cnt--;
                if(cnt==0&&i>0)
                {st.push('.');cnt=3;}
                i--;
            }
            string a="";
            while(!st.empty())
            {a+= st.top();st.pop();}
            
            return a;
        }
    }      
};