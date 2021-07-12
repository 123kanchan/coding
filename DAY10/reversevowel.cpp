class Solution {
public:
    bool isvowel(char s)
    {
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r)
        {
            while(!(isvowel(s[l]))&&l<r)l++;
            while((!isvowel(s[r]))&&l<r)r--;
            if(l<r){swap(s[l],s[r]);l++;r--;}
         }
        return s;
    }
};