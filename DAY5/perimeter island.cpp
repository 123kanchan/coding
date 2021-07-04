class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
     int perimeter=0;

        int u,d,l,r;
        int row= grid.size();
        int c=grid[0].size();
        for(int i=0;i<row;i++)
        {
        for(int j=0;j<c;j++)
        {
            if(grid[i][j]==1)
            {
                u= i==0? 0 : grid[i-1][j];
                d= i==row-1? 0:grid[i+1][j];
                l= j==0? 0:grid[i][j-1];
                r= j==c-1? 0:grid[i][j+1];
                 perimeter+=4-(u+d+l+r);
            }

        }
        }
        return perimeter;
    }
};
