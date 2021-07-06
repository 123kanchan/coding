class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0,j;
       for(int i=0;i<grid.size();i++)
       {
           j=grid[0].size()-1;
           while(j>=0&&grid[i][j]<0){
               
               c++;
               j--;
           }
           
       }
        return c;
    }
};