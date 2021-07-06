class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int sum;
        vector<int>res;
        vector<pair<int,int>>s;
      for(int i=0;i<mat.size();i++)
      {
          sum=0;
          for(int j=0;j<mat[0].size();j++)
          {
              sum+=mat[i][j];
          }
          s.push_back({sum,i});
          
      }
        sort(s.begin(),s.end());
        int o=0;
        while(k--)
        {
            res.push_back(s[o].second);
            o++;
        }
        return res;
    }
};