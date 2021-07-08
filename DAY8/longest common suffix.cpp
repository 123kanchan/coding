#include<bits/stdc++.h>
using namespace std;
string lcs(vector<string> &str)
{
    string res="";
    sort(str.begin(),str.end());
int j=0;
int n=str.size();
int m=min(str[0].size(),str[n-1].size());

    for(j=0;j<m;j++)
{

    reverse(str[j].begin(),str[j].end());
    reverse(str[n-1].begin(),str[n-1].end());
    if(str[0][j]==str[n-1][j])
        res+=str[0][j];
    else break;
}
 return reverse(res.begin(),res.end());
}
int main()
{
   int n;
   cin>>n;
   string a;
   vector<string>str;
   for(int i=0;i<n;i++)
    {
        cin>>a;
        str.push_back(a);
    }
    string res;
    res=lcs(str);
    cout<<res;
}
