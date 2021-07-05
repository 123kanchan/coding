class Solution {
public:
   
    int capture(vector<vector<char>>& board,int i,int j)
    {
        int cnt=0;
        int tem=i;
        int temp=j;
       while(i-1>=0)
       {
           if(board[i-1][j]=='B')break;
           if(board[i-1][j]=='.')i--;
           else {
               
               cnt++;
               break;}
       }
        i=tem;
        j=temp;
        while(i+1<=7)
        {
            if(board[i+1][j]=='B')break;
             if(board[i+1][j]=='.')i++;
            else {
                cnt++;break;}
        }
        i=tem;
        j=temp;
        while(j-1>=0){
             if(board[i][j-1]=='B')break;
             if(board[i][j-1]=='.')j--;
            else {cnt++;break;}
        }
        i=tem;
        j=temp;
         while(j+1<=7)
        {
            if(board[i][j+1]=='B')break;
              if(board[i][j+1]=='.')j++;
             else {cnt++;break;}
        }
        return cnt;
    }
    
    int numRookCaptures(vector<vector<char>>& board) {
        int res=0;
        int flag=0;
        int i,j;
        for( i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                { flag=1;
                break;
                }
                
            }
            if(flag)break;
        }
        res=capture(board,i,j);
        return res;
    }
};