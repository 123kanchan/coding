class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>a;
        int max,min,k;
        for(int i=0;i<matrix.size();i++)
        {
            max=INT_MIN;
            min=INT_MAX;
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]<min)
                {
                    min=matrix[i][j];
                    k=j;
                }
            }
            for(int l=0;l<matrix.size();l++)
            {
                if(matrix[l][k]>max)
                {
                    max=matrix[l][k];
                    
                }
            }
            if(min==max){
                a.push_back(max);
          
            }
        }
        return a;
    }
};