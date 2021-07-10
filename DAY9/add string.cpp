class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;
        int i=num1.length()-1;
        int j=num2.length()-1;
        int sum=0;
        int carry=0;
        while(i>=0||j>=0)
        {
            sum=carry;
            if(i>=0)sum+=num1[i--]-'0';
            if(j>=0)sum+=num2[j--]-'0';
            carry=sum>9?1:0;
            res+=to_string(sum%10);
            
        }
        if(carry)res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};