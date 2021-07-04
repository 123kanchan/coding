//0(n3) approach
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m=grid.size();//no of rows
        int n=grid[0].size();//no. of columns
        k=k%(m*n);
        while(k--)
        {
            int temp=grid[m-1][n-1];
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    swap(temp,grid[i][j]);
                }
            }
        }
        return grid;
    }
};

//optimised

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m=grid.size();//no of rows
        int n=grid[0].size();//no. of columns
        int arr[m*n];
        int brr[m*n];
        int l=0;
        vector<vector<int>>res(grid);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[l++]=grid[i][j];
            }
        }
        for(int i=0;i<m*n;i++)
        {
brr[(i+k)%(m*n)]=arr[i];
        }
        l=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=brr[l++];
            }
        }
        return res;
    }
};



