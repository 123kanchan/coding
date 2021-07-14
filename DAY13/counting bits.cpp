class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>res;
        
for(int i=0;i<=n;i++)
{
    int n=i;
    int f=1;
    int cnt=0;
    while(n>0)
    {
       if((f & n)!=0)cnt++;
        n=n>>1;
    }
    res.push_back(cnt);
}
        return res;
    }
};